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
		cin>>C[0];
		int total = 0;
		for (int i=1; i<a; i++) 
		{
			cin>>C[i];
			C[i]+=C[i-1];
		}
		int maximum = INT_MIN;
		for (int i=0; i<a; i++) 
		{
			C[i] -= total;
			if (C[i] < 0) total += C[i];
			maximum = max(maximum, C[i]);
		}
		cout<<maximum<<endl;
	}
}
