//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
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
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TListView *ListView1;
	TXMLDocument *XMLDocument;
	TButton *XmlLoadButton;
	TButton *AddTaskButton;
	TButton *DeleteTaskButton;
	TButton *EditTaskButton;
	TLabel *Label1;
	TEdit *NameEdit;
	TLabel *Label2;
	TEdit *DurationEdit;
	TEdit *DifficultyEdit;
	TLabel *Label3;
	void __fastcall XmlLoadButtonClick(TObject *Sender);
	void __fastcall AddTaskButtonClick(TObject *Sender);
	void __fastcall DeleteTaskButtonClick(TObject *Sender);
	void __fastcall EditTaskButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
