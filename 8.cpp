#include <iostream>

using namespace std;

#define int long long 

int32_t main()
{
	int n;
	cin >> n;

	int numbers[10];
	int nums = 0;

	for(int i=1;i<=n;i++)
	{
		int x;
		cin >> x;

		for(int j=0;j<=9;j++)
			numbers[j] = 0;

		bool is_reapeted_number = false;

		while(x > 0)
		{
			if(numbers[x%10] != 0)
			{
				is_reapeted_number = true;
				break;
			}

			numbers[x%10] = 1;

			x /= 10;
		}

		if(!is_reapeted_number)
			nums++;
	}

	cout << nums;

	return 0;
}