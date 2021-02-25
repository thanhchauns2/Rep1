#include <bits/stdc++.h>
using namespace std;
int C[10][10];
int a;
set<string> total;
void Try(int x, int y, string steps)
{
	if (x == a - 1 && y == a - 1)
	{
		total.insert(steps);
	}
	if (x > a-1) return;
	if (y > a-1) return;
	if (C[x][y] == 0) return;
	Try(x + 1, y, steps + "D");
	Try(x, y + 1, steps + "R");
}
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		total.clear();
		cin>>a;
		for (int i=0; i<a; i++)
		{
			for (int j=0; j<a; j++) cin>>C[i][j];
		}
		Try(0,0,"");
		vector<string> F(total.begin(), total.end());
		for (int i=0; i<F.size(); i++) cout<<F[i]<<' ';
		if (F.size()==0) cout<<-1;
		cout<<endl;
	}
}
