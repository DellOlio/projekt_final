//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainMenu.h"
#include "TimeOrganizer.h"
#include "Schedule.h"
#include "MoneyManagement.h"
#include "QuickMoneyManagment.h"
#include "BugReport.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainMenuForm *MainMenuForm;
//---------------------------------------------------------------------------
class Language{


String hrvatski;
String engleski;
public:


Language(String _hrvatski,String _engleski):hrvatski(_hrvatski),engleski(_engleski){

}
String getHrvatski(){
	return hrvatski;
}
String getEngleski(){
	return engleski;
}
void setHrvatski(String _hrvatski){
	hrvatski = _hrvatski;
}
void setEngleski(String _engleski){
	engleski = _engleski;
}


};
Language TimeOrganizer1("Organizator vremena","Time Organizer");
Language ScheduleButton1("Raspored","School schedule");
Language MoneyButton1("Upravljanje financijama","Money management");
Language QuickMoneyManagmentBtn1("Brzo UF","Quick MM");
Language BugReportBtn1("Prijavi bug","Report a bug");
//TimeOrganizer->Caption = "Organizator vremena";
//ScheduleButton->Caption = "Raspored";
//MoneyButton->Caption = "Upravljanje financijama";
//QuickMoneyManagmentBtn->Caption = "Brzo UF";
//BugReportBtn->Caption = "Prijavi bug";
//
//TimeOrganizer->Caption = "Time Organizer";
//ScheduleButton->Caption = "School schedule";
//MoneyButton->Caption = "Money management";
//QuickMoneyManagmentBtn->Caption = "Quick MM";
//BugReportBtn->Caption = "Report a bug";


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

void __fastcall TMainMenuForm::QuickMoneyManagmentBtnClick(TObject *Sender)
{
    QuickMoneyManagmentForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall TMainMenuForm::BugReportBtnClick(TObject *Sender)
{
	STARTUPINFO startInfo;
	PROCESS_INFORMATION processInfo;
	char CommandLine[255] = "consoleapp.exe";
	HANDLE mp;
	GetStartupInfo(&startInfo);
	if(!CreateProcess(NULL, UnicodeString(CommandLine).w_str(),NULL,NULL,0,0,NULL,NULL,&startInfo,&processInfo)){
		ShowMessage("process failed");
		return;

	}
	WaitForSingleObject(processInfo.hProcess, INFINITE);
	unsigned long returnValue;
	GetExitCodeProcess(processInfo.hProcess,&returnValue);
	if(returnValue == 1||returnValue == 2||returnValue == 12||returnValue == 123){
		BugReportForm->Show();
		this->Close();
	}
	else{
		MainForm->Close();
    }

}
//---------------------------------------------------------------------------

void __fastcall TMainMenuForm::EngBtnClick(TObject *Sender)
{


TimeOrganizer->Caption = TimeOrganizer1.getEngleski();
ScheduleButton->Caption = ScheduleButton1.getEngleski();
MoneyButton->Caption = MoneyButton1.getEngleski();
QuickMoneyManagmentBtn->Caption = QuickMoneyManagmentBtn1.getEngleski();
BugReportBtn->Caption = BugReportBtn1.getEngleski();
}
//---------------------------------------------------------------------------

void __fastcall TMainMenuForm::HrBtnClick(TObject *Sender)
{


TimeOrganizer->Caption = TimeOrganizer1.getHrvatski();
ScheduleButton->Caption = ScheduleButton1.getHrvatski();
MoneyButton->Caption = MoneyButton1.getHrvatski();
QuickMoneyManagmentBtn->Caption = QuickMoneyManagmentBtn1.getHrvatski();
BugReportBtn->Caption = BugReportBtn1.getHrvatski();
}
//---------------------------------------------------------------------------

void __fastcall TMainMenuForm::FormClose(TObject *Sender, TCloseAction &Action)
{
	MainForm->Close();
}
//---------------------------------------------------------------------------

