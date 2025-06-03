//---------------------------------------------------------------------------

#ifndef TimeOrgThreadH
#define TimeOrgThreadH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class TimeOrgThread : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall TimeOrgThread(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
