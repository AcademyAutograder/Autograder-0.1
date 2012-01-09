#include <iostream>
using namespace std;
int main()
{
	int f;
	int z;
	cin >> z;
	for(int x = 0; x < z; x++)
	{
		cin >> f;
		if(f>0)
			cout << f << " great" << endl;
		else
			cout << f << " stinker" << endl;
	}
}
