#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	N=1;
	while(N--)
	{
		int a;
		cin>>a;
		int C[a],F[a];
		for (int i=0; i<a; i++) cin>>C[i];
		fill(F, F+a, 1);
		for (int i=1; i<a; i++)
		{
			for (int j=0; j<i; j++)
			{
				if (C[i] > C[j]) F[i] = max(F[i], F[j]+1);
			}
		}
		sort(F, F+a);
		cout<<F[a-1]<<endl;
	}
}
