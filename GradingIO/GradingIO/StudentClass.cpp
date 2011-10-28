//#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>
using namespace std;
#include "StudentDef.h"

Quiz::Quiz(string decName)
{
	setName(decName);
	remove((decName+".txt").c_str());
	resultsFile.open(name + ".txt");
}
void Quiz::compile(string answersName)
{
	string cmd =  "cl /EHsc ";
	cmd += name;
	system((cmd + ".cpp").c_str());
	system((name + ".exe < " + answersName + ".txt" + " > " + name + ".txt").c_str()); //example.exe < answers.txt >left.txt\"");
}
void Quiz::setName(string nameSet)
{
	name = nameSet;
}
Quiz::~Quiz()
{
	resultsFile.close();
	remove((name + ".obj").c_str());
	remove((name + ".exe").c_str());
}
TeacherQuiz::~TeacherQuiz()
{
	answersFile.close();
}
void StudentQuiz::setStatus(bool s)
{
	status = s;
}