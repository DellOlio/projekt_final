//---------------------------------------------------------------------------


#pragma hdrstop

#include "DataModule.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
__fastcall TDataModule1::TDataModule1(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TDataModule1::PrihodiTableCalcFields(TDataSet *DataSet)
{
   int eur = DataSet -> FieldByName("IznosEUR") -> AsInteger;
	DataSet ->FieldByName("IznosKN") -> AsInteger = eur * 7.53450;
}
//---------------------------------------------------------------------------

void __fastcall TDataModule1::TroskoviTableCalcFields(TDataSet *DataSet)
{
    int eur = DataSet -> FieldByName("IznosEUR") -> AsInteger;
	DataSet ->FieldByName("IznosKN") -> AsInteger = eur * 7.53450;
}
//---------------------------------------------------------------------------

