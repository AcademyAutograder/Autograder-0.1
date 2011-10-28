#define _WIN32_WINNT 0x0500
//#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

#include "StudentDef.h"
#include "GradingFunctions.h"

int main()
{
	setEnv();
	Quiz stud1("example");
	stud1.compile("answers");
}
