
// ************************************************************************************************* //
//                                                                                                 
//                                        XML Data Binding                                         
//                                                                                                 
//         Generated on: 23.6.2024. 3:00:39                                                        
//       Generated from: C:\Users\Marin\Documents\Embarcadero\Studio\Projects\projekt2\tasks.xml   
//                                                                                                 
// ************************************************************************************************* //

#include <System.hpp>
#pragma hdrstop

#include "tasks.h"


// Global Functions 

_di_IXMLtasksType __fastcall Gettasks(Xml::Xmlintf::_di_IXMLDocument Doc)
{
  return (_di_IXMLtasksType) Doc->GetDocBinding("tasks", __classid(TXMLtasksType), TargetNamespace);
};

_di_IXMLtasksType __fastcall Gettasks(Xml::Xmldoc::TXMLDocument *Doc)
{
  Xml::Xmlintf::_di_IXMLDocument DocIntf;
  Doc->GetInterface(DocIntf);
  return Gettasks(DocIntf);
};

_di_IXMLtasksType __fastcall Loadtasks(const System::UnicodeString& FileName)
{
  return (_di_IXMLtasksType) Xml::Xmldoc::LoadXMLDocument(FileName)->GetDocBinding("tasks", __classid(TXMLtasksType), TargetNamespace);
};

_di_IXMLtasksType __fastcall  Newtasks()
{
  return (_di_IXMLtasksType) Xml::Xmldoc::NewXMLDocument()->GetDocBinding("tasks", __classid(TXMLtasksType), TargetNamespace);
};

// TXMLtasksType 

void __fastcall TXMLtasksType::AfterConstruction(void)
{
  RegisterChildNode(System::UnicodeString("task"), __classid(TXMLtaskType));
  ItemTag = "task";
  ItemInterface = __uuidof(IXMLtaskType);
  Xml::Xmldoc::TXMLNodeCollection::AfterConstruction();
};

_di_IXMLtaskType __fastcall TXMLtasksType::Get_task(const int Index)
{
  return (_di_IXMLtaskType) List->Nodes[Index];
};

_di_IXMLtaskType __fastcall TXMLtasksType::Add()
{
  return (_di_IXMLtaskType) AddItem(-1);
};

_di_IXMLtaskType __fastcall TXMLtasksType::Insert(const int Index)
{
  return (_di_IXMLtaskType) AddItem(Index);
};

// TXMLtaskType 

System::UnicodeString __fastcall TXMLtaskType::Get_name()
{
  return GetChildNodes()->Nodes[System::UnicodeString("name")]->Text;
};

void __fastcall TXMLtaskType::Set_name(const System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("name")]->NodeValue = Value;
};

int __fastcall TXMLtaskType::Get_duration()
{
  return XmlStrToInt(GetChildNodes()->Nodes[System::UnicodeString("duration")]->Text);
};

void __fastcall TXMLtaskType::Set_duration(const int Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("duration")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLtaskType::Get_durationType()
{
  return GetChildNodes()->Nodes[System::UnicodeString("durationType")]->Text;
};

void __fastcall TXMLtaskType::Set_durationType(const System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("durationType")]->NodeValue = Value;
};

System::UnicodeString __fastcall TXMLtaskType::Get_difficulty()
{
  return GetChildNodes()->Nodes[System::UnicodeString("difficulty")]->Text;
};

void __fastcall TXMLtaskType::Set_difficulty(const System::UnicodeString Value)
{
  GetChildNodes()->Nodes[System::UnicodeString("difficulty")]->NodeValue = Value;
};
