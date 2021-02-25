#include <bits/stdc++.h>
using namespace std;
int M = 1e9+7;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int a;
		cin>>a;
		long long C[a];
		for (long long i=0; i<a; i++) cin>>C[i];
		sort(C,C+a);
		long long total = 0;
		for (long long i=1; i<a; i++) total = (total + i*C[i]) %M;
		cout<<total<<endl;
	}
}
