#include <bits/stdc++.h>
using namespace std;
int M = 123456789;
long long get(long long a, long long b)
{
	if (b==1) return a;
	if (b==0) return 1;
	long long k = get(a, b/2);
	if (b%2) return (((k%M)*(k%M))%M * (a%M))%M;
	return ((k%M)*(k%M))%M;
}
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		long long a;
		cin>>a;
		cout<<get(2,a-1)<<endl;
	}
}
