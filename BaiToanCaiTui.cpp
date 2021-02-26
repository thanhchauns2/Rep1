#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int a, b;
		cin>>a>>b;
		int C[a+1][b+1];
		int F[a+1], K[a+1];
		for (int i=1; i<=a; i++) cin>>F[i];
		for (int i=1; i<=a; i++) cin>>K[i];
		for (int i=0; i<=a; i++)
		{
			for (int j=0; j<=b; j++)
			{
				if (i == 0 || j == 0) C[i][j] = 0;
				else
				{
					C[i][j] = C[i-1][j];
					if (F[i] <= j) C[i][j] = max(C[i][j], C[i-1][j-F[i]] + K[i]);
				}
			}
		}
		cout<<C[a][b]<<endl;
	}
}
