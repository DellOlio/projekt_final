//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MoneyManagement.h"
#include "DataModule.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMoneyManagementForm *MoneyManagementForm;
//---------------------------------------------------------------------------
__fastcall TMoneyManagementForm::TMoneyManagementForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TMoneyManagementForm::ComboBoxChange(TObject *Sender)
{

	DBGrid1->Columns->Clear();

	// Change the DataSource based on the ComboBox selection
	if (ComboBox->Text == "Korisnik")
    {
        DBGrid1->DataSource = DataModule1->KorisnikDataSource;
    }
	else if (ComboBox->Text == "Prihodi")
    {
        DBGrid1->DataSource = DataModule1->PrihodiDataSource;
    }
	else if (ComboBox->Text == "Troskovi")
    {
        DBGrid1->DataSource = DataModule1->TroskoviDataSource;
    }
	else if (ComboBox->Text == "Mjesta")
    {
        DBGrid1->DataSource = DataModule1->MjestaDataSource;
	}


    for (int i = 0; i < DBGrid1->Columns->Count; i++)
    {
		DBGrid1->Columns->Items[i]->Width = 150;
	}

}
//---------------------------------------------------------------------------


void __fastcall TMoneyManagementForm::SearchButtonClick(TObject *Sender)
{
		TLocateOptions Search;
		Search.Clear();
		Search << loCaseInsensitive;

		if(DataModule1->PrihodiTable->Locate("KorisnikID", FilterEdit->Text, Search)  ||
			DataModule1->TroskoviTable->Locate("KorisnikID", FilterEdit->Text, Search) ) {

			ShowMessage("Korisnik je prona?en");
		}
		else
			ShowMessage("Korisnik nije prona?en!");


}
//---------------------------------------------------------------------------



void __fastcall TMoneyManagementForm::SilaznoButtonClick(TObject *Sender)
{
     // silazno po iznosu
	DataModule1->PrihodiTable->IndexFieldNames = "Iznos DESC";
	DataModule1->TroskoviTable->IndexFieldNames = "Iznos DESC";
}
//---------------------------------------------------------------------------

void __fastcall TMoneyManagementForm::UzlaznoButtonClick(TObject *Sender)
{
         // uzlazno po iznosu
	DataModule1->PrihodiTable->IndexFieldNames = "Iznos";
	DataModule1->TroskoviTable->IndexFieldNames = "Iznos";
}
//---------------------------------------------------------------------------

