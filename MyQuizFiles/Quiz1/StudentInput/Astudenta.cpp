#include <iostream>
using namespace std;
int main()
{
	while(1);
	int f;
	int z;
	cin >> z;
	for(int x = 0; x < z; x++)
	{
		cin >> f;
		if(f>0)
			cout << f << " Great" << endl;
		else
			cout << f << " Stinker" << endl;
	}
}
