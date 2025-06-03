//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "TimeOrgThread.h"
#include "TimeOrganizer.h"
#include "tasks.h"

#include <thread>
#include <chrono>
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
//      void __fastcall TimeOrgThread::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

__fastcall TimeOrgThread::TimeOrgThread(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall TimeOrgThread::Execute()
{
	FreeOnTerminate=true;

	while(1){
	 _di_IXMLtasksType tasks = Gettasks(TimeOrganizerForm->XMLDocument);


	  TimeOrganizerForm->ListView1 -> Items -> Clear();
	  for (int i= 0; i < tasks -> Count; i++) {
		EnterCriticalSection(&TimeOrganizerForm->critical);
		TimeOrganizerForm->ListView1 -> Items -> Add();
		TimeOrganizerForm->ListView1 -> Items -> Item[i] -> Caption =  tasks -> task[i] -> name;
		TimeOrganizerForm->ListView1 -> Items -> Item[i] -> SubItems ->Add( tasks -> task[i] -> duration);
		TimeOrganizerForm->ListView1 -> Items -> Item[i] -> SubItems ->Add( tasks -> task[i] -> difficulty);
		LeaveCriticalSection(&TimeOrganizerForm->critical);
	  }

	  std::this_thread::sleep_for(std::chrono::seconds(5));
	}

}
//---------------------------------------------------------------------------
