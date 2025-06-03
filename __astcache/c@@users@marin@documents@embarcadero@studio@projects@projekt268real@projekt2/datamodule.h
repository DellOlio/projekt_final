//---------------------------------------------------------------------------

#ifndef DataModuleH
#define DataModuleH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
//---------------------------------------------------------------------------
class TDataModule1 : public TDataModule
{
__published:	// IDE-managed Components
	TADOConnection *Connection;
	TADOTable *KorisnikTable;
	TDataSource *KorisnikDataSource;
	TDataSource *PrihodiDataSource;
	TADOTable *PrihodiTable;
	TADOTable *TroskoviTable;
	TADOTable *MjestaTable;
	TDataSource *TroskoviDataSource;
	TDataSource *MjestaDataSource;
	TAutoIncField *PrihodiTableID;
	TWideStringField *PrihodiTableVrsta;
	TDateTimeField *PrihodiTableDatum;
	TIntegerField *PrihodiTableKorisnikID;
	TIntegerField *PrihodiTableIznosEUR;
	TAutoIncField *TroskoviTableID;
	TWideStringField *TroskoviTableOpis;
	TDateTimeField *TroskoviTableDatum;
	TIntegerField *TroskoviTableKorisnikID;
	TIntegerField *TroskoviTableIznosEUR;
	TAutoIncField *KorisnikTableID;
	TWideStringField *KorisnikTableOIB;
	TWideStringField *KorisnikTableIme;
	TWideStringField *KorisnikTablePrezime;
	TIntegerField *KorisnikTableStarost;
	TIntegerField *KorisnikTableMjestoID;
	TAutoIncField *MjestaTableID;
	TWideStringField *MjestaTableNaziv;
	TWideStringField *MjestaTableZupanija;
	TStringField *PrihodiTableKorisnikPrezime;
	TStringField *TroskoviTableKorisnikPrezime;
	TIntegerField *PrihodiTableIznosKN;
	TIntegerField *TroskoviTableIznosKN;
	TBlobField *KorisnikTableSlika;
	TADOTable *FRKorisnikTable;
	TAutoIncField *AutoIncField1;
	TWideStringField *WideStringField1;
	TWideStringField *WideStringField2;
	TWideStringField *WideStringField3;
	TIntegerField *IntegerField1;
	TIntegerField *IntegerField2;
	TBlobField *BlobField1;
	TDataSource *FRKorisnikDataSource;
	TDataSource *FRPrihodiDataSource;
	TADOTable *FRPrihodiTable;
	TAutoIncField *AutoIncField2;
	TWideStringField *WideStringField4;
	TIntegerField *IntegerField3;
	TIntegerField *IntegerField4;
	TDateTimeField *DateTimeField1;
	TStringField *StringField1;
	TIntegerField *IntegerField5;
	TADOTable *FRTroskoviTable;
	TAutoIncField *AutoIncField3;
	TWideStringField *WideStringField5;
	TIntegerField *IntegerField6;
	TIntegerField *IntegerField7;
	TDateTimeField *DateTimeField2;
	TStringField *StringField2;
	TIntegerField *IntegerField8;
	TADOTable *FrMjestaTable;
	TAutoIncField *AutoIncField4;
	TWideStringField *WideStringField6;
	TWideStringField *WideStringField7;
	TDataSource *FRTrosokviDataSource;
	TDataSource *FRMjestaDataSource;
	void __fastcall PrihodiTableCalcFields(TDataSet *DataSet);
	void __fastcall TroskoviTableCalcFields(TDataSet *DataSet);
private:	// User declarations
public:		// User declarations
	__fastcall TDataModule1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
#endif
