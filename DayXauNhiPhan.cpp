#include <bits/stdc++.h>
using namespace std;
long long factor[94];
char get(long long a, long long b)
{
	if (a==1) return '0';
	if (a==2) return '1';
	if (b <= factor[a-2]) return get(a-2,b);
	return get(a - 1, b - factor[a-2]);
}
void factory()
{
	factor[0] = 0;
	factor[1] = 1;
	for (int i=2; i<93; i++) factor[i] = factor[i-1] + factor[i-2];
}
int main()
{
	factory();
	int N;
	cin>>N;
	while(N--)
	{
		long long a,b;
		cin>>a>>b;
		cout<<get(a,b)<<endl;
	}
}
