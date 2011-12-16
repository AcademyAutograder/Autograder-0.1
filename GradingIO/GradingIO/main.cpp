//Special thanks to jtshaw of linuxquestions.org for his implementation of the dirent directory
#define _WIN32_WINNT 0x0500
#include <Windows.h>
#include <sys/types.h>
#include "dirent.h"
#include <errno.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string globDir = "C:\\Users\\Ben\\Documents\\Visual Studio 2010\\Projects\\Junior\\GradingIO\\Quiz1\\";

#include "StudentDef.h"
#include "GradingFunctions.h"

int main()
{
	setEnv();
	//cout << "Enter a source directory: ";
	string f = "C:\\Users\\Ben\\Documents\\Visual Studio 2010\\Projects\\Junior\\GradingIO\\Quiz1";
	//cin >> f;
	vector <string> fNames(0);
	getDir(f,fNames);
	for(int a = 0; a < fNames.size(); a++)
	{
		if(fNames.at(a).size() < 4)
		{
			fNames.erase(fNames.begin());
			a = -1;
		}
		else if(fNames.at(a).substr((fNames.at(a).size())-4,5) != ".cpp")
		{
			fNames.erase(fNames.begin()+a);
			a--;
		}
		
	}
	for(int b = 0; b < fNames.size(); b++)
	{
		cout << fNames.at(b) << endl;
	}
	StudentQuiz def;
	StudentQuiz q[5];
	for(int p = 0; p < fNames.size(); p++)
	{
		fNames.at(p).erase(5); 
		q[p].setName(fNames.at(p));
		cout << "Good" << endl;
		q[p].compile("answers");
	}

}
