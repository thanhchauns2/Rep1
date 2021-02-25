#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		long long a;
		cin>>a;
		priority_queue<int, vector<int>, greater<int> > C;
		long long token;
		for (long long i=0; i<a; i++) 
		{
			cin>>token;
			C.push(token);
		}
		long long total = 0;
		while (C.size()>1)
		{
			int k = C.top();
			C.pop();
			int k2 = C.top();
			C.pop();
			total += (k + k2);
			C.push(k+k2);
		}
		cout<<total<<endl;
	}
}
