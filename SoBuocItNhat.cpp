#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		long long a;
		cin>>a;
		long long C[a],F[a],K[a];
		for (long long i=0; i<a; i++) cin>>C[i];
		fill(F, F+a, 1);
		long long maximum = -1;
		fill(K, K+a, 1);
		for (long long i=1; i<a; i++)
		{
			for (long long j=0; j<i; j++)
			{
				if (C[i] >= C[j]) F[i] = max(F[i], F[j]+1);
				maximum = max(maximum, F[i]);
				// else if (C[i] <= C[j]) K[i] = max(K[i], K[j]+1);
			}
		}
// 		sort(F, F+a);
// 		sort(K, K+a);
//		for (long long i=0; i<a; i++) cout<<F[i]<<' ';
//		cout<<endl;
//		for (long long i=0; i<a; i++) cout<<K[i]<<' ';
//		cout<<endl;
		cout<<a-maximum<<endl;
	}
}
