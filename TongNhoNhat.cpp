#include <bits/stdc++.h>
using namespace std;
int M = 1e9+7;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		long long a;
		cin>>a;
		long long C[a];
		for (long long i=0; i<a; i++) cin>>C[i];
		sort(C,C+a);
		long long total = 0;
		long long steps = 0;
		for (long long i=a-1; i>=1; i-=2)
		{
			total += C[i]*pow(10,steps);
			total += C[i-1]*pow(10,steps);
			steps++;
		}
		if (a%2) total += C[0]*pow(10,steps);
		cout<<total<<endl;
	}
}
