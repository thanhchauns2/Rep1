#include <bits/stdc++.h>
using namespace std;
int M = 1e9+7;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		long long a,b;
		cin>>a>>b;
		long long C[a];
		for (long long i=0; i<a; i++) cin>>C[i];
		sort(C,C+a);
		long long total1 = 0, total2 = 0, total = 0;
		for (int i=0; i<b; i++) total1 += C[i];
		for (int i=b; i<a; i++) total2 += C[i];
		total = abs(total2 - total1);
		total1 = 0;
		total2 = 0;
		for (int i=0; i<a-b; i++) total1 += C[i];
		for (int i=a-b; i<a; i++) total2 += C[i];
		total = max(total, abs(total2 - total1));
		cout<<total<<endl;
	}
}
