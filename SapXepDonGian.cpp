#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	vector<int> C;
	C.resize(a);
	vector<int> F;
	for (int i=0; i<a; i++) cin>>C[i];
	vector<int> K;
	K.clear();
	int token;
	vector<int>::iterator it;
	int maximum=1;
	int count;
	while (!C.empty())
	{
	    it = find(F.begin(),F.end(),C.back()+1);
	    if (it!=F.end())
	    {
	        F[it-F.begin()]--;
	        K[it-F.begin()]++;
	        count=K[it-F.begin()];
	        maximum=max(maximum,count);
	    }
	    else
	    {
	        K.push_back(1);
	        F.push_back(C.back());
	    }
	    C.pop_back();
	}
	cout<<a-maximum;
}
