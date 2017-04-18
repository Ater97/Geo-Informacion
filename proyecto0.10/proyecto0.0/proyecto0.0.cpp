// proyecto0.0.cpp : main project file.

#include "stdafx.h"
#include "MyForm.h"

using namespace System;
using namespace proyecto00;

[STAThread]
int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(true);
	Application::Run(gcnew MyForm());
    return 0;
}