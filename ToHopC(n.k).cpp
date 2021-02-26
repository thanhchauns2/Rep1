#include <bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
int factor[1001][1001];
void factory()
{
	memset(factor,0,sizeof(factor));
	for (int i=0; i<1001; i++)
	{
		for (int j=0; j<=i; j++)
		{
			if (j == 0 || j == i) factor[i][j] = 1;
			else factor[i][j] = (factor[i-1][j] + factor[i-1][j-1])%M;
		}
	}
}
int main()
{
	factory();
	int N;
	cin>>N;
	while(N--)
	{
		int a, b;
		cin>>a>>b;
		cout<<factor[a][b]<<endl;
	}
}
