
void setEnv()
{
//	HWND hWnd = GetConsoleWindow();
//	ShowWindow( hWnd, SW_HIDE );
	_putenv("INCLUDE=\"C:\\Program Files (x86)\\Microsoft Visual Studio 10.0\\VC\\include\";");
	_putenv("LIB=C:\\Program Files (x86)\\Microsoft Visual Studio 10.0\\VC\\lib;C:\\Program Files (x86)\\Microsoft SDKs\\Windows\\v7.0A\\Lib");
}
void test()
{
	string name =  "cl /EHsc ";
	name += "example.cpp";
	system(name.c_str());
	remove("left.txt");
	fstream student,answers;
	student.open("left.txt");
	answers.open("answers.txt");
	answers << "18" << endl;
	system("example.exe < answers.txt >left.txt\"");
//	remove("example.exe");
	remove("example.obj");
}