//---------------------------------------------------------------------------

#include <System.hpp>
#include <thread>
#include <chrono>
#include "Main.h"
#pragma hdrstop

#include "HelpThread.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
	  void __fastcall HelpThread::UpdateCaption()
      {
		MainForm->HelpCaption->Caption = "Contact - AppHelpMail@gmail.com";
      }
//---------------------------------------------------------------------------

__fastcall HelpThread::HelpThread(bool CreateSuspended)
	: TThread(CreateSuspended)
{

}
//---------------------------------------------------------------------------
void __fastcall HelpThread::Execute()
{
	FreeOnTerminate=true;
	std::this_thread::sleep_for(std::chrono::seconds(20));




	Synchronize(&UpdateCaption);
}
//---------------------------------------------------------------------------
