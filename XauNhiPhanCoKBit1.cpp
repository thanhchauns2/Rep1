#include <bits/stdc++.h>
using namespace std;
int a, b;
vector<int> C;
set<vector<int> > F;
int count1;
void Result(vector<vector<int> > &K)
{
	for (int i=0; i < K.size(); i++)
	{
		for (int j=1; j<K[i].size(); j++) cout<<K[i][j];
		cout<<endl;
	}
}
void getResult()
{
	F.insert(C);
}
void Try(int x)
{
	for (int i = 0; i <= 1; i++)
	{
		if (i == 1) count1++;
		C[x] = i;
		if (x == a) 
		{
			if (count1 == b) getResult();
		}
		else Try(x+1);
		if (i == 1) count1--;
	}
}
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		C.clear();
		F.clear();
		count1 = 0;
		cin>>a>>b;
		C.resize(a+1);
		Try(1);
		vector<vector<int> > K(F.begin(), F.end());
		Result(K);
	}
}
