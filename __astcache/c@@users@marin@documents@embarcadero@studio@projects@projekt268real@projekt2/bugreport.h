//---------------------------------------------------------------------------

#ifndef BugReportH
#define BugReportH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TBugReportForm : public TForm
{
__published:	// IDE-managed Components
	TButton *SaveButton;
	TEdit *FormEdit;
	TLabel *formPlaceLabel;
	TEdit *DescriptionEdit;
	TLabel *DescriptionLabel;
	TButton *LoadButton;
	TRadioButton *ENGBtn;
	TRadioButton *HrBtn;
	void __fastcall SaveButtonClick(TObject *Sender);
	void __fastcall LoadButtonClick(TObject *Sender);
	void __fastcall HrBtnClick(TObject *Sender);
	void __fastcall ENGBtnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TBugReportForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TBugReportForm *BugReportForm;
//---------------------------------------------------------------------------
#endif
