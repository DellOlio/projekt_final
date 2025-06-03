//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <memory>
#include <vector>

#include "BugReport.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TBugReportForm *BugReportForm;
//---------------------------------------------------------------------------
class MyFileFormat{


	float version;
public:
	char name[15];
	MyFileFormat(){
		String(strncpy(name, "MyFileFormat", 15));
		version =1.0;


	}
	void setVersion(float _version){
		version=_version;
	}
	float getVersion(){
		return version;
	}


};

class Bug{
public:
	char description[255],form[25];

	Bug()=default;
	Bug(char* _form,char* _description){

	String(strncpy(form,_form,25));
	strncpy(description,_description,255);

	}


};

std::vector<Bug> bugs;


__fastcall TBugReportForm::TBugReportForm(TComponent* Owner)
	: TForm(Owner)
{

}
char* UnicodeStringToCharArray(const UnicodeString& us, char* rez, int rezSize) {
	//pretvaramo unicode string u wide string
	WideString ws(us);
    int len = ws.Length();
	// Konvertiraj WideString u char array koriste?i wcstombs funkciju
	wcstombs(rez, ws.c_bstr(), len);

	return rez;
}
//---------------------------------------------------------------------------

void __fastcall TBugReportForm::SaveButtonClick(TObject *Sender)
{
//	const char* ch[255] = FormEdit->Text.c_str();
//	Bug bug(String(FormEdit->Text),"asda");

	String formStr = String(FormEdit->Text);
	String descriptionStr = String(DescriptionEdit->Text);
	// mjesto gdje spremamo zavrseni string
	char formChar[25];
	char descriptionChar[255];
	//UnicodeString u char*
	UnicodeStringToCharArray(formStr, formChar, sizeof(formChar));
	UnicodeStringToCharArray(descriptionStr, descriptionChar, sizeof(descriptionChar));

	Bug bug(formChar,descriptionChar);
	bugs.push_back(bug);
	MyFileFormat Header;
	std::unique_ptr<TFileStream> bugStream(new TFileStream("bugs.mff",fmCreate));
	bugStream->Write(&Header,sizeof(MyFileFormat));


//	bugStream->Write(&bug,sizeof(Bug));

	for(int i = 0 ; i<bugs.size();i++){

		bugStream->Write(&bugs[i],sizeof(Bug));
	}




}
//---------------------------------------------------------------------------
void __fastcall TBugReportForm::LoadButtonClick(TObject *Sender)
{





	std::unique_ptr<TMemoryStream> bugStream(new TMemoryStream);
	bugStream->LoadFromFile("bugs.mff");

	MyFileFormat Header;
	bugStream->Read(&Header,sizeof(MyFileFormat));

	if(String(Header.name)!="MyFileFormat" ||Header.getVersion() !=1.0){
		ShowMessage("Wrong name or version");
		return ;
	}



	Bug tmp;
	int bugsCount = (bugStream->Size - sizeof(Header)) / sizeof(Bug);

	for(int i = 0; i<bugsCount;i++){
		UnicodeString bug;
		bugStream->Read(&tmp,sizeof(Bug));
		bug += String(tmp.form)+" ";
		bug += String(tmp.description);
		ShowMessage(bug);

	}

}
//---------------------------------------------------------------------------
void __fastcall TBugReportForm::HrBtnClick(TObject *Sender)
{
	formPlaceLabel->Caption = "Dijalog";
	DescriptionLabel->Caption = "Opis";
	SaveButton->Caption = "Spremi";
	LoadButton->Caption="Ucitaj";
}
//---------------------------------------------------------------------------

void __fastcall TBugReportForm::ENGBtnClick(TObject *Sender)
{

	formPlaceLabel->Caption = "Form";
	DescriptionLabel->Caption = "Description";
	SaveButton->Caption = "Save";
	LoadButton->Caption="Load";
}
//---------------------------------------------------------------------------

