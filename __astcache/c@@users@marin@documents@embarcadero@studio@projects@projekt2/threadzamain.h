//---------------------------------------------------------------------------

#ifndef ThreadZaMainH
#define ThreadZaMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class ThreadZaMain : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall ThreadZaMain(bool CreateSuspended);
     void __fastcall UpdateCaption();
};
//---------------------------------------------------------------------------
#endif
