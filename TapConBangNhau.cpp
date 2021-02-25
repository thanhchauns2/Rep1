#include <bits/stdc++.h>
using namespace std;
long long a,b;
bool check = false;
void Try(vector<long long> C)
{
	if (check == true) return;
	if (C.size()==0) return;
	long long total = 0;
	for (long long i = 0; i < C.size(); i++) total += C[i];
	if (total + total == b) 
	{
		check = true;
		return;
	}
	if (total + total < b) return;
	vector<long long> K;
	for (long long i=0; i<C.size(); i++)
	{
		if (check == true) return;
		K = C;
		K.erase(K.begin()+i);
		Try(K);
	}
}
int main()
{
	long long N;
	cin>>N;
	while(N--)
	{
		check = false;
		b = 0;
		cin>>a;
		vector<long long> C(a);
		for (long long i=0; i<a; i++) cin>>C[i];
		for (long long i = 0; i < C.size(); i++) b += C[i];
		if (b%2==1)
		{
			cout<<"NO"<<endl;
			continue;
		}
		sort(C.begin(), C.end());
		Try(C);
		(check) ? cout<<"YES" : cout<<"NO";
		cout<<endl;
	}
}
