#include <bits/stdc++.h>
using namespace std;
int M = 1e9 + 7;
long long luyThua(long long a, long long b)
{
	if (b==0) return 1;
	if (b==1) return a;
	long long k = luyThua(a, b/2);
	if (b%2) return (((k%M) * (k%M))%M * (a%M))%M;
	return ((k%M) * (k%M))%M;
}
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		long long a,b;
		cin>>a>>b;
		cout<<luyThua(a,b)<<endl;
	}
}
