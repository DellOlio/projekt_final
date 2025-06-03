//---------------------------------------------------------------------------

#ifndef HelpThreadH
#define HelpThreadH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class HelpThread : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall HelpThread(bool CreateSuspended);
    void __fastcall UpdateCaption();
};
//---------------------------------------------------------------------------
#endif
