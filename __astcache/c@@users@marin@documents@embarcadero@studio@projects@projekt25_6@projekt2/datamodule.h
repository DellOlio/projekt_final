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
private:	// User declarations
public:		// User declarations
	__fastcall TDataModule1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
#endif
