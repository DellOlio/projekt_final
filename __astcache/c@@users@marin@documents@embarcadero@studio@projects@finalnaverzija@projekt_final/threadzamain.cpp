//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop


#include <thread>
#include <chrono>
#include "Main.h"
#include "ThreadZaMain.h"
#include <mutex>
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
	  void __fastcall ThreadZaMain::UpdateCaption()
	  {


		MainForm->ThreadCaption->Caption = "Jeste li ovdje?";
	  }
//---------------------------------------------------------------------------

__fastcall ThreadZaMain::ThreadZaMain(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall ThreadZaMain::Execute()
{

	FreeOnTerminate=true;
	std::this_thread::sleep_for(std::chrono::seconds(10));




	Synchronize(&UpdateCaption);





}
//---------------------------------------------------------------------------
