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
		int k = b*c;
		int k1 = k / a;
		if (k%a) k1++;
		int k2 = k1/7;
		k1+k2 <= b ? cout<<k1 : cout<<-1;
		cout<<endl;
	}
}
