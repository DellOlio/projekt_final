//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.StdCtrls.hpp>
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TLabel *UsernameLabel;
	TLabel *PasswordLabel;
	TLabel *NoAccountLabel;
	TEdit *UsernameEdit;
	TEdit *PasswordEdit;
	TButton *LogInButton;
	TCheckBox *RememberMeCheckBox;
	TButton *RegisterButton;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TLabel *IncorrectPassword;
	TLabel *ThreadCaption;
	TLabel *TimeLabel;
	TLabel *HelpCaption;
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall RadioButton1Click(TObject *Sender);
	void __fastcall RadioButton2Click(TObject *Sender);
	void __fastcall LogInButtonClick(TObject *Sender);
	void __fastcall RegisterButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    bool UserFound = False;
	__fastcall TMainForm(TComponent* Owner);

};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
