#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	system("\"C:\\Program Files (x86)\\Microsoft Visual Studio 10.0\\VC\\vcvarsall.bat\"");
	_putenv("INCLUDE=\"C:\\Program Files (x86)\\Microsoft Visual Studio 10.0\\VC\\include\";\"C:\\Program Files (x86)\\Microsoft Visual Studio 10.0\\VC\\bin\\\";");
	_putenv("LIB=C:\\Program Files (x86)\\Microsoft Visual Studio 10.0\\VC\\lib;C:\\Program Files (x86)\\Microsoft SDKs\\Windows\\v7.0A\\Lib");

	string cl = "\"C:\\Program Files (x86)\\Microsoft Visual Studio 10.0\\VC\\bin\\cl.exe\"";
	string f = "";
	for(int h = 1; h < argc ; h++)
	{
		for(int i = 0; argv[h][i]; i++)
			f += argv[h][i];
		string cmd = "\"" + cl + " /EHsc " + "\""+ f + "\"";
		system(cmd.c_str());
		f.clear();
	}
	return 0;
}