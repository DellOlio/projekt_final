//---------------------------------------------------------------------------

#include <System.hpp>
#pragma hdrstop

#include "LocalTimeThread.h"
#pragma package(smart_init)
//---------------------------------------------------------------------------

//   Important: Methods and properties of objects in VCL can only be
//   used in a method called using Synchronize, for example:
//
//      Synchronize(&UpdateCaption);
//
//   where UpdateCaption could look like:
//
//      void __fastcall TimeThread::UpdateCaption()
//      {
//        Form1->Caption = "Updated in a thread";
//      }
//---------------------------------------------------------------------------

__fastcall TimeThread::TimeThread(bool CreateSuspended)
	: TThread(CreateSuspended)
{
}
//---------------------------------------------------------------------------
void __fastcall TimeThread::Execute()
{
		while (true) {
        std::time_t currentTime = std::time(nullptr);

        std::tm* localTime = std::localtime(&currentTime);



        // Print the current time in HH:MM:SS format
        std::cout << "Current Time: "
                  << std::put_time(localTime, "%H:%M:%S")
                  << std::endl;

        // Wait for 1 second
        std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}
//---------------------------------------------------------------------------
