//---------------------------------------------------------------------------

#ifndef MainMenuH
#define MainMenuH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TMainMenuForm : public TForm
{
__published:	// IDE-managed Components
	TButton *TimeOrganizer;
	TButton *ScheduleButton;
	TButton *MoneyButton;
	void __fastcall TimeOrganizerClick(TObject *Sender);
	void __fastcall ScheduleButtonClick(TObject *Sender);
	void __fastcall MoneyButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMainMenuForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainMenuForm *MainMenuForm;
//---------------------------------------------------------------------------
#endif
