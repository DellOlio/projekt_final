//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <fstream>
#include "Register.h"
#include "CountryInfoService.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TRegisterForm *RegisterForm;
//---------------------------------------------------------------------------
__fastcall TRegisterForm::TRegisterForm(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TRegisterForm::RadioButton1Click(TObject *Sender)
{
	NameLabel->Caption = "Name";
	AgeLabel->Caption = "Age";
	UsernameLabel->Caption = "Username";
	PasswordLabel->Caption = "Password";
	RegisterButton->Caption= "Register";
	CountryLabel -> Caption = "Country";
}
//---------------------------------------------------------------------------
void __fastcall TRegisterForm::RadioButton2Click(TObject *Sender)
{
	NameLabel->Caption = "Ime";
	AgeLabel->Caption = "Starost";
	UsernameLabel->Caption = "Korisnicko ime";
	PasswordLabel->Caption = "Lozinka";
	RegisterButton->Caption= "Registracija";
	CountryLabel -> Caption = "Država";
}
//---------------------------------------------------------------------------
void __fastcall TRegisterForm::RegisterButtonClick(TObject *Sender)
{
	fstream myFile;
	myFile.open("RegisterInfo.txt",ios::app);
	if(myFile.is_open()){

	   AnsiString name= NameEditRegister->Text;
	   AnsiString age= AgeEditRegister->Text;
	   AnsiString username= UsernameEditRegister->Text;
	   AnsiString password= PasswordEditRegister->Text;
	   AnsiString country = ComboBox1 -> Text;

	   myFile<<name<<","<<age<<","<<username<<","<<password<<","<<country<<"\n";
	   myFile.close();
	   this->Close();


	}
}
//---------------------------------------------------------------------------





void __fastcall TRegisterForm::FormActivate(TObject *Sender)
{
      _di_CountryInfoServiceSoapType service = GetCountryInfoServiceSoapType();
	  ArrayOftCountryCodeAndName countryList = service->ListOfCountryNamesByCode();



	  for(int i = 0; i < countryList.size();i++) {
		  ComboBox1 -> Items->Add(countryList[i]->sName);
	  }
}
//---------------------------------------------------------------------------

