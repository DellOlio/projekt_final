//---------------------------------------------------------------------------

#ifndef TimeThreadH
#define TimeThreadH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class TimeThread : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall TimeThread(bool CreateSuspended);
    void __fastcall UpdateCaption();
};
//---------------------------------------------------------------------------
#endif
