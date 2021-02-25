#include <bits/stdc++.h>
using namespace std;
int M = 1e9+7;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		long long a;
		cin>>a;
		long long C[a], F[a];
		for (long long i=0; i<a; i++) 
		{
			cin>>C[i];
			F[i] = C[i];
		}
		sort(F,F+a);
		// for (long long i=0; i<a; i++) cout<<C[i]<<' ';
		// cout<<endl;
		// for (long long i=0; i<a; i++) cout<<F[i]<<' ';
		// cout<<endl;
		int key = 0;
		for (int i=0; i<a/2; i++)
		{
			// cout<<C[i]<<' '<<F[i]<<' '<<C[a-1-i]<<' '<<F[a-1-i]<<endl;
			if (C[i]==F[a-1-i] && C[a-i-1]==F[i] || C[i]==F[i] && C[a-1-i]==F[a-1-i])
			{
				key++;
			}
		}
		// cout<<key<<endl;
		key == a/2 ? cout<<"Yes" : cout<<"No";
		cout<<endl;
	}
}
