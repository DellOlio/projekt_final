//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <vector>
#include "QuickMoneyManagment.h"
#include "mojeLibFunkcije.h"
#include "calculator.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TQuickMoneyManagmentForm *QuickMoneyManagmentForm;
//---------------------------------------------------------------------------
__fastcall TQuickMoneyManagmentForm::TQuickMoneyManagmentForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


class MoneySaver {
private:
	double amount;
	String description;
public:
	MoneySaver(double amt, String desc) : amount(amt), description(desc) {}
	double getAmount() const {
		return amount;
	}
	String getDescription() const {
		return description;
	}
	void display(TMemo* memo) const {
		memo->Lines->Add("Ustedeno: " + String(amount) + " Opis: " + description);
	}
};

class TimeManager {
private:
	double timeSpent;
	String activity;
public:
	TimeManager(double time, String act) : timeSpent(time), activity(act) {}
	double getTimeSpent() const {
		return timeSpent;
	}
	String getActivity() const {
		return activity;
	}
};






std::vector<MoneySaver> savings;
std::vector<TimeManager> timeLogs;




//---------------------------------------------------------------------------

double calculateButton(){
	double totalSavings = 0;
	for (int i = 0;i<savings.size();i++) {
		totalSavings += savings[i].getAmount();
	}
	return totalSavings;

}



//---------------------------------------------------------------------------
void __fastcall TQuickMoneyManagmentForm::ButtonAddClick(TObject *Sender)
{
	double amount = EditAmount->Text.ToDouble();
	String description = EditTime->Text;
	MoneySaver saver(amount, description);
	savings.push_back(saver);

	saver.display(QuickMoneyManagmentForm->MemoOutput);

}
//---------------------------------------------------------------------------
void __fastcall TQuickMoneyManagmentForm::ButtonCalculateClick(TObject *Sender)
{
	double totalSavings = calculateButton();
	MemoOutput->Lines->Add("Ukupna ušteda: " + String(totalSavings));
}
//---------------------------------------------------------------------------
void __fastcall TQuickMoneyManagmentForm::ButtonMultiplyClick(TObject *Sender)
{
	double num1 = EditNum1->Text.ToDouble();
	double num2 = EditNum2->Text.ToDouble();
	double result = multiply(num1, num2);
	EditResult->Text = result;
}
//---------------------------------------------------------------------------
void __fastcall TQuickMoneyManagmentForm::ButtonDivideClick(TObject *Sender)
{
	try {
		double num1 = EditNum1->Text.ToDouble();
		double num2 = EditNum2->Text.ToDouble();
		if (num2 == 0) {
		throw std::invalid_argument("Division by zero");
		}
		else{
			double result = divide(num1, num2);
			EditResult->Text = result;
		}
	} catch (const std::invalid_argument &e) {
		EditResult->Text = "Error: Division by zero";
	}
}
//---------------------------------------------------------------------------
void __fastcall TQuickMoneyManagmentForm::EngButtonClick(TObject *Sender)
{
UstedenoLabel->Caption = "Saved";
OpisLabel->Caption ="Description";
ButtonAdd->Caption ="Add";
ButtonCalculate->Caption ="Calculate";
CalcLabel->Caption ="Calculator";
ButtonMultiply->Caption ="Multiply";
ButtonDivide->Caption ="Divide";
SumButton -> Caption = "Add";
SubstractButton -> Caption = "Substract";
}
//---------------------------------------------------------------------------

void __fastcall TQuickMoneyManagmentForm::HRBtnClick(TObject *Sender)
{
UstedenoLabel->Caption = "Ustedeno";
OpisLabel->Caption ="Opis";
ButtonAdd->Caption ="Dodaj";
ButtonCalculate->Caption ="Izracunaj";
CalcLabel->Caption ="Kalkulator";
ButtonMultiply->Caption ="Mnozi";
ButtonDivide->Caption ="Dijeli";
SumButton -> Caption = "Zbroji";
SubstractButton -> Caption = "Oduzmi";
}
//---------------------------------------------------------------------------



void __fastcall TQuickMoneyManagmentForm::SumButtonClick(TObject *Sender)
{

	_di_CalculatorSoap calc = GetCalculatorSoap();
	double num1 = EditNum1->Text.ToDouble();
	double num2 = EditNum2->Text.ToDouble();
	double result = calc -> Add(num1,num2);
	EditResult->Text = result;
}
//---------------------------------------------------------------------------



void __fastcall TQuickMoneyManagmentForm::SubstractButtonClick(TObject *Sender)
{
     _di_CalculatorSoap calc = GetCalculatorSoap();
	double num1 = EditNum1->Text.ToDouble();
	double num2 = EditNum2->Text.ToDouble();
	double result = calc -> Subtract(num1,num2);
	EditResult->Text = result;
}
//---------------------------------------------------------------------------

