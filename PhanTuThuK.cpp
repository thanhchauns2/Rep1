#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		vector<int> K(a+b);
		int C[a], F[b];
		for (int i=0; i<a; i++) cin>>C[i];
		for (int j=0; j<b; j++) cin>>F[j];
		merge(C,C+a,F,F+b,K.begin());
		sort(K.begin(), K.end());
		cout<<K[c-1]<<endl;
	}
}
