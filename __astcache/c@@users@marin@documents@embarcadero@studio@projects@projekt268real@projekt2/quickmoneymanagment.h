//---------------------------------------------------------------------------

#ifndef QuickMoneyManagmentH
#define QuickMoneyManagmentH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TQuickMoneyManagmentForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *UstedenoLabel;
	TLabel *OpisLabel;
	TLabel *CalcLabel;
	TEdit *EditAmount;
	TEdit *EditTime;
	TButton *ButtonAdd;
	TMemo *MemoOutput;
	TButton *ButtonCalculate;
	TEdit *EditNum1;
	TEdit *EditNum2;
	TEdit *EditResult;
	TButton *ButtonMultiply;
	TButton *ButtonDivide;
	TRadioButton *EngButton;
	TRadioButton *HRBtn;
	void __fastcall ButtonAddClick(TObject *Sender);
	void __fastcall ButtonCalculateClick(TObject *Sender);
	void __fastcall ButtonMultiplyClick(TObject *Sender);
	void __fastcall ButtonDivideClick(TObject *Sender);
	void __fastcall EngButtonClick(TObject *Sender);
	void __fastcall HRBtnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TQuickMoneyManagmentForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TQuickMoneyManagmentForm *QuickMoneyManagmentForm;
//---------------------------------------------------------------------------
#endif
