#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int a;
		cin>>a;
		int C[a], F[a-1];
		for (int i=0; i<a; i++) cin>>C[i];
		for (int j=0; j<a-1; j++) cin>>F[j];
		for (int i=0; i<a-1; i++) if (C[i] != F[i])
		{
			cout<<i+1<<endl;
			break;
		}
	}
}
