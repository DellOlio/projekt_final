//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainMenu.h"
#include "TimeOrganizer.h"
#include "Schedule.h"
#include "MoneyManagement.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainMenuForm *MainMenuForm;
//---------------------------------------------------------------------------
__fastcall TMainMenuForm::TMainMenuForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMainMenuForm::TimeOrganizerClick(TObject *Sender)
{
	TimeOrganizerForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainMenuForm::ScheduleButtonClick(TObject *Sender)
{
	ScheduleForm ->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainMenuForm::MoneyButtonClick(TObject *Sender)
{
	 MoneyManagementForm ->Show();
}
//---------------------------------------------------------------------------

