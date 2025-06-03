//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop
#include "Main.h"
#include <thread>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <sstream>

#include "TimeThread.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
	  void __fastcall TimeThread::UpdateCaption()
	  {




		std::time_t currentTime = std::time(nullptr);
		std::tm* localTime = std::localtime(&currentTime);

		std::ostringstream oss;
		oss << std::put_time(localTime, "%H:%M:%S");
		std::string timeString = oss.str();

		UnicodeString unicodeTimeString = timeString.c_str();
		MainForm->TimeLabel->Caption = unicodeTimeString;
	  }

//---------------------------------------------------------------------------

__fastcall TimeThread::TimeThread(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall TimeThread::Execute()
{

	FreeOnTerminate=true;
	while (true) {



		Synchronize(&UpdateCaption);






		std::this_thread::sleep_for(std::chrono::seconds(1));





	}
}
//---------------------------------------------------------------------------
