#include <iostream>

using namespace std;

int main()
{
	int n, a, x;

	cin >> a >> x >> n;

	int sum = 0;
	for(int k=0; k<=n; k++)
	{
		int x_tavan_k = 1;
		for(int i=1; i<=k; i++)
			x_tavan_k *= x;

		int a_tavan_nk = 1;
		for(int i=1; i<=n-k; i++)
			a_tavan_nk *= a;

		int n_fact = 1;
		for(int i=1;i<=n;i++)
			n_fact*=i;

		int n_k_fact = 1;
		for(int i=1;i<=n-k;i++)
			n_k_fact*=i;

		int k_fact = 1;
		for(int i=1;i<=k;i++)
			k_fact*=i;		

		int nk = n_fact / (n_k_fact*k_fact);

		sum += nk*x_tavan_k*a_tavan_nk;
	}

	cout << sum;

	return 0;
}