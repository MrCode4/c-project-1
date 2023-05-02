#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	for(int i=min(a,b);i<=max(a,b);i++)
	{
		bool is_aval = true;
		for(int j=2;j<i;j++)
			if(i %j == 0)
			{
				is_aval = false;
				break;
			}

		if(is_aval)
			cout << i << endl;
	}

	return 0;
}