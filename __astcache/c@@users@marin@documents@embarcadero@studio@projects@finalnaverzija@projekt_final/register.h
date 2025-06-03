//---------------------------------------------------------------------------

#ifndef RegisterH
#define RegisterH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TRegisterForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *NameLabel;
	TLabel *AgeLabel;
	TLabel *UsernameLabel;
	TLabel *PasswordLabel;
	TEdit *NameEditRegister;
	TEdit *AgeEditRegister;
	TEdit *UsernameEditRegister;
	TEdit *PasswordEditRegister;
	TButton *RegisterButton;
	TRadioButton *RadioButton1;
	TRadioButton *RadioButton2;
	TLabel *CountryLabel;
	TComboBox *ComboBox1;
	void __fastcall RadioButton1Click(TObject *Sender);
	void __fastcall RadioButton2Click(TObject *Sender);
	void __fastcall RegisterButtonClick(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TRegisterForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegisterForm *RegisterForm;
//---------------------------------------------------------------------------
#endif
