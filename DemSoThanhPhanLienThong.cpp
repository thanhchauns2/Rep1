#include <bits/stdc++.h>
using namespace std;
bool check[1001];
bool visited[1001];
vector<vector<int> > C;
int a, b, c, d;
void Try(int x)
{
	if (check[x]) return;
	check[x] = 1;
	for (int i=0; i<C[x].size(); i++) Try(C[x][i]);
}
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		memset(check,false,sizeof(check));
		C.clear();
		cin>>a>>b;
		vector<int> F(0);
		for (int i=0; i<=a; i++) C.push_back(F);
		for (int i=0; i<b; i++)
		{
			int token, token2;
			cin>>token>>token2;
			C[token].push_back(token2);
			C[token2].push_back(token);
		}
		int total = 0;
		for (int i=1; i<=a; i++)
		{
			if (!check[i])
			{
				total++;
				Try(i);
			}
		}
		cout<<total<<endl;
	}
}
