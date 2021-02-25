#include <bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
long long C[65];
void factory()
{
	C[0] = 1;
	for (int i=1; i<65; i++) C[i] = 2*C[i-1];
}
long long getIt(long long a)
{
	for (int i=0; i<65; i++) if (a == C[i]) return i+1;
}
int main()
{
	factory();
	int N;
	cin>>N;
	while(N--)
	{
		long long a;
		long long b;
		cin>>a>>b;
		cout<<getIt(b & -b)<<endl;
	}
}
