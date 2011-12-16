void setEnv()
{
//	HWND hWnd = GetConsoleWindow();
//	ShowWindow( hWnd, SW_HIDE );
	_putenv("INCLUDE=\"C:\\Program Files (x86)\\Microsoft Visual Studio 10.0\\VC\\include\";");
	_putenv("LIB=C:\\Program Files (x86)\\Microsoft Visual Studio 10.0\\VC\\lib;C:\\Program Files (x86)\\Microsoft SDKs\\Windows\\v7.0A\\Lib");
}
void getDir(string dir,vector<string> &fileNames)
{
	DIR *dp;
	struct dirent *dirp;
	if((dp = opendir(dir.c_str())) == NULL)
	{
		cout << "Error(" << errno << ") opening " << dir << endl;
		//return errno;
	}
	while ((dirp = readdir(dp)) != NULL)
	{
		fileNames.push_back(string(dirp->d_name));
	}
	closedir(dp);
}