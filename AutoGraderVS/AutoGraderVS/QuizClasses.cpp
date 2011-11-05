#include <iostream>
#include <fstream>
#include <Windows.h>
#include <sys/types.h>
#include <errno.h>
#include <direct.h>
#include <string>
using namespace std;
#include "QuizDef.h"

string globRes = "C:\\Users\\Ben\\Autograder-0.1\\AutoGraderVS\\AutoGraderVS\\QuizDocs\\Quiz1\\Results\\";
string globDir = "C:\\Users\\Ben\\Autograder-0.1\\AutoGraderVS\\AutoGraderVS\\QuizDocs\\Quiz1\\";

Quiz::Quiz()
{
}
Quiz::Quiz(string decName)
{
	setName(decName);
	remove((decName+".txt").c_str());
	resultsFile.open(globRes + name + ".txt");
}
void Quiz::compile(string answersName)
{
	string cmd =  "cl /EHsc " + globDir;
	cmd += name;
	system((cmd + ".cpp\"").c_str());
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
StudentQuiz::StudentQuiz()
{
}
void StudentQuiz::setStatus(bool s)
{
	status = s;
}