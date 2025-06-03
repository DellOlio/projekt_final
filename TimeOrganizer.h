//---------------------------------------------------------------------------

#ifndef TimeOrganizerH
#define TimeOrganizerH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
//---------------------------------------------------------------------------
class TTimeOrganizerForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TListView *ListView1;
	TButton *XmlLoadButton;
	TButton *AddTaskButton;
	TButton *DeleteTaskButton;
	TButton *EditTaskButton;
	TEdit *NameEdit;
	TEdit *DurationEdit;
	TEdit *DifficultyEdit;
	TXMLDocument *XMLDocument;
	TLabel *Label4;
	TEdit *FreeTimeEdit;
	TButton *CheckFreeTimeButton;
	void __fastcall XmlLoadButtonClick(TObject *Sender);
	void __fastcall AddTaskButtonClick(TObject *Sender);
	void __fastcall DeleteTaskButtonClick(TObject *Sender);
	void __fastcall EditTaskButtonClick(TObject *Sender);
	void __fastcall CheckFreeTimeButtonClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    CRITICAL_SECTION critical;
	__fastcall TTimeOrganizerForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTimeOrganizerForm *TimeOrganizerForm;
//---------------------------------------------------------------------------
#endif
