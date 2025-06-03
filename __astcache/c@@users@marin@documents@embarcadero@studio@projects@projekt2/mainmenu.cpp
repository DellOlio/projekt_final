//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainMenu.h"
#include "TimeOrganizer.h"
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

