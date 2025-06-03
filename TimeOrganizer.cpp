//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TimeOrganizer.h"
#include "tasks.h"
#include "TimeOrgThread.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTimeOrganizerForm *TimeOrganizerForm;
//---------------------------------------------------------------------------
__fastcall TTimeOrganizerForm::TTimeOrganizerForm(TComponent* Owner)
	: TForm(Owner)
{
	InitializeCriticalSection(&critical);

}
//---------------------------------------------------------------------------
void __fastcall TTimeOrganizerForm::XmlLoadButtonClick(TObject *Sender)
{


		_di_IXMLtasksType tasks = Gettasks(TimeOrganizerForm->XMLDocument);

	  TimeOrganizerForm->ListView1 -> Items -> Clear();
	  for (int i= 0; i < tasks -> Count; i++) {

		TimeOrganizerForm->ListView1 -> Items -> Add();
		TimeOrganizerForm->ListView1 -> Items -> Item[i] -> Caption =  tasks -> task[i] -> name;
		TimeOrganizerForm->ListView1 -> Items -> Item[i] -> SubItems ->Add( tasks -> task[i] -> duration);
		TimeOrganizerForm->ListView1 -> Items -> Item[i] -> SubItems ->Add( tasks -> task[i] -> difficulty);

	  }


      TimeOrgThread *myThread = new TimeOrgThread(false);



}
//---------------------------------------------------------------------------

void __fastcall TTimeOrganizerForm::AddTaskButtonClick(TObject *Sender)
{
	 if (NameEdit->Text.IsEmpty() || DurationEdit->Text.IsEmpty() || DifficultyEdit->Text.IsEmpty())
	{
		ShowMessage("All fields must have values.");
		return;
	}

 _di_IXMLtasksType tasks = Gettasks(XMLDocument);
 _di_IXMLtaskType task = tasks -> Add();
 task -> name = NameEdit -> Text;
 task -> duration = StrToFloat(DurationEdit->Text);
 task -> difficulty = DifficultyEdit -> Text;

 XMLDocument -> SaveToFile(XMLDocument->FileName);

 NameEdit -> Text = "";
 DurationEdit -> Text = "";
 DifficultyEdit -> Text = "";


}
//---------------------------------------------------------------------------

void __fastcall TTimeOrganizerForm::DeleteTaskButtonClick(TObject *Sender)
{
  _di_IXMLtasksType tasks = Gettasks(XMLDocument);
  tasks -> Delete(ListView1->ItemIndex);
  XMLDocument -> SaveToFile(XMLDocument->FileName);


}
//---------------------------------------------------------------------------

void __fastcall TTimeOrganizerForm::EditTaskButtonClick(TObject *Sender)
{
	// Provjera jel je koje oznaceno
	if(ListView1->ItemIndex == -1)
	return; // ako nije kraj
	_di_IXMLtasksType tasks = Gettasks(XMLDocument);

	_di_IXMLtaskType task = tasks -> task[ListView1 -> ItemIndex];

    if (NameEdit->Text.IsEmpty() || DurationEdit->Text.IsEmpty() || DifficultyEdit->Text.IsEmpty())
	{
		ShowMessage("All fields must have values.");
		return;
	}

	 task -> name = NameEdit -> Text;
	 task -> duration = StrToFloat(DurationEdit->Text);
	 task -> difficulty = DifficultyEdit -> Text;

	 XMLDocument -> SaveToFile(XMLDocument->FileName);

	 NameEdit -> Text = "";
	 DurationEdit -> Text = "";
	 DifficultyEdit -> Text = "";
}
//---------------------------------------------------------------------------


void __fastcall TTimeOrganizerForm::CheckFreeTimeButtonClick(TObject *Sender)
{
 if (FreeTimeEdit->Text.IsEmpty())
    {
        ShowMessage("Please enter the amount of free time you have.");
        return;
    }
    try
    {
        float freeTime = StrToFloat(FreeTimeEdit->Text);
        _di_IXMLtasksType tasks = Gettasks(XMLDocument);
        UnicodeString suitableTasks = "Tasks you can do in " + FreeTimeEdit->Text + " minutes:\n";
        bool found = false;
        for (int i = 0; i < tasks->Count; i++)
        {
            float taskDuration = tasks->task[i]->duration;
            if (taskDuration <= freeTime)
            {
                suitableTasks += tasks->task[i]->name + " (" + taskDuration + " minutes)\n";
                found = true;
            }
        }
        if (found)
        {
            ShowMessage(suitableTasks);
        }
        else
        {
            ShowMessage("No tasks can be completed in the given time.");
        }
    }
    catch (const EConvertError &e)
    {
        ShowMessage("Please enter a valid number for free time.");
    }
}
//---------------------------------------------------------------------------

void __fastcall TTimeOrganizerForm::FormClose(TObject *Sender, TCloseAction &Action)

{
	DeleteCriticalSection(&critical);
}
//---------------------------------------------------------------------------

