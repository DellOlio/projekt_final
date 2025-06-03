
// ************************************************************************************************* //
//                                                                                                 
//                                        XML Data Binding                                         
//                                                                                                 
//         Generated on: 23.6.2024. 3:00:39                                                        
//       Generated from: C:\Users\Marin\Documents\Embarcadero\Studio\Projects\projekt2\tasks.xml   
//                                                                                                 
// ************************************************************************************************* //

#ifndef   tasksH
#define   tasksH

#include <System.hpp>
#include <System.Variants.hpp>
#include <System.SysUtils.hpp>
#include <Xml.Xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xml.XMLDoc.hpp>
#include <XMLNodeImp.h>
#include <Xml.xmlutil.hpp>


// Forward Decls 

__interface IXMLtasksType;
typedef System::DelphiInterface<IXMLtasksType> _di_IXMLtasksType;
__interface IXMLtaskType;
typedef System::DelphiInterface<IXMLtaskType> _di_IXMLtaskType;

// IXMLtasksType 

__interface INTERFACE_UUID("{5DE55C25-CCA8-4D2E-8F55-6B14E2F14EE1}") IXMLtasksType : public Xml::Xmlintf::IXMLNodeCollection
{
public:
public:
  // Property Accessors 
  virtual _di_IXMLtaskType __fastcall Get_task(const int Index) = 0;
  // Methods & Properties 
  virtual _di_IXMLtaskType __fastcall Add() = 0;
  virtual _di_IXMLtaskType __fastcall Insert(const int Index) = 0;
  __property _di_IXMLtaskType task[const int Index] = { read=Get_task };/* default */
};

// IXMLtaskType 

__interface INTERFACE_UUID("{7EB035C6-0D4B-401C-BE37-846BA7E198ED}") IXMLtaskType : public Xml::Xmlintf::IXMLNode
{
public:
  // Property Accessors 
  virtual System::UnicodeString __fastcall Get_name() = 0;
  virtual int __fastcall Get_duration() = 0;
  virtual System::UnicodeString __fastcall Get_durationType() = 0;
  virtual System::UnicodeString __fastcall Get_difficulty() = 0;
  virtual void __fastcall Set_name(const System::UnicodeString Value) = 0;
  virtual void __fastcall Set_duration(const int Value) = 0;
  virtual void __fastcall Set_durationType(const System::UnicodeString Value) = 0;
  virtual void __fastcall Set_difficulty(const System::UnicodeString Value) = 0;
  // Methods & Properties 
  __property System::UnicodeString name = { read=Get_name, write=Set_name };
  __property int duration = { read=Get_duration, write=Set_duration };
  __property System::UnicodeString durationType = { read=Get_durationType, write=Set_durationType };
  __property System::UnicodeString difficulty = { read=Get_difficulty, write=Set_difficulty };
};

// Forward Decls 

class TXMLtasksType;
class TXMLtaskType;

// TXMLtasksType 

class TXMLtasksType : public Xml::Xmldoc::TXMLNodeCollection, public IXMLtasksType
{
  __IXMLNODECOLLECTION_IMPL__
protected:
  // IXMLtasksType 
  virtual _di_IXMLtaskType __fastcall Get_task(const int Index);
  virtual _di_IXMLtaskType __fastcall Add();
  virtual _di_IXMLtaskType __fastcall Insert(const int Index);
public:
  virtual void __fastcall AfterConstruction(void);
};

// TXMLtaskType 

class TXMLtaskType : public Xml::Xmldoc::TXMLNode, public IXMLtaskType
{
  __IXMLNODE_IMPL__
protected:
  // IXMLtaskType 
  virtual System::UnicodeString __fastcall Get_name();
  virtual int __fastcall Get_duration();
  virtual System::UnicodeString __fastcall Get_durationType();
  virtual System::UnicodeString __fastcall Get_difficulty();
  virtual void __fastcall Set_name(const System::UnicodeString Value);
  virtual void __fastcall Set_duration(const int Value);
  virtual void __fastcall Set_durationType(const System::UnicodeString Value);
  virtual void __fastcall Set_difficulty(const System::UnicodeString Value);
};

// Global Functions 

_di_IXMLtasksType __fastcall Gettasks(Xml::Xmlintf::_di_IXMLDocument Doc);
_di_IXMLtasksType __fastcall Gettasks(Xml::Xmldoc::TXMLDocument *Doc);
_di_IXMLtasksType __fastcall Loadtasks(const System::UnicodeString& FileName);
_di_IXMLtasksType __fastcall  Newtasks();

#define TargetNamespace ""

#endif