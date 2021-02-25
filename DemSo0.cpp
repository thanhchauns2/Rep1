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
		int C[a];
		for (int i=0; i<a; i++) cin>>C[i];
		int k = lower_bound(C, C+a, 1) - C;
		cout<<k<<endl;
	}
}
