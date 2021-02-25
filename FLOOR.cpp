#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int a,b;
		cin>>a>>b;
		int C[a];
		for (int i=0; i<a; i++) cin>>C[i];
		int k = lower_bound(C, C+a, b) - C;
		if (k==0 && C[k] > b) cout<<-1<<endl;
		else 
		{
			if (C[k] > b) k--;
			cout<<k+1<<endl;
		}
	}
}
