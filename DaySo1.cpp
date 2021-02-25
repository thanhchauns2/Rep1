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
		int C[a][a];
		for (int i=0; i<a; i++) cin>>C[0][i];
		for (int i=1; i<a; i++)
		{
			for (int j=0; j<a-i; j++) C[i][j] = C[i-1][j] + C[i-1][j+1];
		}
		for (int i=0; i<a; i++)
		{
			cout<<'[';
			for (int j=0; j<a-i-1; j++) cout<<C[i][j]<<' ';
			cout<<C[i][a-i-1]<<']'<<endl;
		}
	}
}
