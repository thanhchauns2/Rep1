#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		string a,b;
		cin>>a>>b;
		int x = a.length();
		int y = b.length();
		int C[x][y];
		memset(C,0,sizeof(C));
		for (int i=0; i<x; i++)
		{
			for (int j=0; j<y; j++)
			{
				if (j > 0)
				{
					if (i > 0) C[i][j] = C[i-1][j];
					C[i][j] = max(C[i][j], C[i][j-1]);
				}
				if (a[i] == b[j]) 
				{
					if (i > 0 && j > 0) C[i][j] = max(C[i][j], C[i-1][j-1] + 1);
					else C[i][j] = 1;
				}
			}
		}
		cout<<C[x-1][y-1]<<endl;
	}
}
