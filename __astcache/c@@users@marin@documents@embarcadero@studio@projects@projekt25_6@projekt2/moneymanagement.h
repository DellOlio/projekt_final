//---------------------------------------------------------------------------

#ifndef MoneyManagementH
#define MoneyManagementH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TMoneyManagementForm : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TDBNavigator *DBNavigator1;
	TComboBox *ComboBox;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *FilterEdit;
	TLabel *Sort;
	TButton *SearchButton;
	TButton *SilaznoButton;
	TButton *UzlaznoButton;
	void __fastcall ComboBoxChange(TObject *Sender);
	void __fastcall SearchButtonClick(TObject *Sender);
	void __fastcall SilaznoButtonClick(TObject *Sender);
	void __fastcall UzlaznoButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMoneyManagementForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMoneyManagementForm *MoneyManagementForm;
//---------------------------------------------------------------------------
#endif
