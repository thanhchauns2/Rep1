#include <bits/stdc++.h>
using namespace std;
long long a,b;
set<vector<long long> > F;
void Try(vector<long long> C)
{
	if (C.size()==0) return;
	long long total = 0;
	for (long long i = 0; i < C.size(); i++) total += C[i];
	if (total == b) 
	{
		F.insert(C);
		return;
	}
	if (total < b) return;
	vector<long long> K;
	for (long long i=0; i<C.size(); i++)
	{
		K = C;
		K.erase(K.begin()+i);
		Try(K);
	}
}
int main()
{
	// long long N;
	// cin>>N;
	// while(N--)
	// {
		F.clear();
		cin>>a>>b;
		vector<long long> C(a);
		for (long long i=0; i<a; i++) cin>>C[i];
		sort(C.begin(), C.end());
		Try(C);
		vector<vector<long long> > K(F.begin(), F.end());
		for (long long i=K.size()-1; i >= 0; i--)
		{
			for (long long j=0; j<K[i].size(); j++) cout<<K[i][j]<<' ';
			cout<<endl;
		}
		cout<<K.size()<<endl;
	// }
}
