#include <bits/stdc++.h>
using namespace std;
bool check[1001];
bool checking;
vector<vector<int> > C;
int a, b, c, d;
void Try(int x, vector<int> K)
{
	if (checking) return;
	if (check[x]) return;
	check[x] = 1;
	K.push_back(x);
//	cout<<x<<' ';
	if (x == d) 
	{
		for (int i = 1; i < K.size(); i++) cout<<K[i]<<' ';
		checking = true;
		return;
	}
	for (int i=0; i<C[x].size(); i++) Try(C[x][i], K);
}
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		memset(check,false,sizeof(check));
		C.clear();
		cin>>a>>b>>c>>d;
		vector<int> F(0);
		checking = false;
		for (int i=0; i<=a; i++) C.push_back(F);
		for (int i=0; i<b; i++)
		{
			int token, token2;
			cin>>token>>token2;
			C[token].push_back(token2);
			C[token2].push_back(token);
		}
		vector<int> K;
		K.clear();
		K.push_back(c);
		Try(c, K);
		cout<<endl;
	}
}
