#include <bits/stdc++.h>
using namespace std;
int total;
int a;
void check(vector<vector<int> > C, int counting)
{
	if (counting == a) 
	{
		total++;
		// for (int i=0; i<a; i++)
		// {
		// 	for (int j=0; j<C[i].size(); j++) cout<<C[i][j]<<' ';
		// 	cout<<endl;
		// }
		return;
	}
	for (int i=0; i<a; i++)
	{
		if (!C[counting][i])
		{
			vector<vector<int> > F = C;
			// cout<<counting<<' '<<F.size()<<' '<<F[0].size()<<endl;
			for (int j=0; j<a; j++)
			{
				F[counting][j] = 1;
				F[j][i] = 1;
			}
			for (int j=0; j<a; j++)
			{
				if (counting - j < 0 || i - j < 0) break;
				F[counting - j][i - j] = 1;
			}
			for (int j=0; j<a; j++)
			{
				if (counting + j >= a || i + j >= a) break;
				F[counting + j][i + j] = 1;
			}
			for (int j=0; j<a; j++)
			{
				if (counting - j < 0 || i + j >=a ) break;
				F[counting - j][i + j] = 1;
			}
			for (int j=0; j<a; j++)
			{
				if (counting + j >= a || i - j <0) break;
				F[counting + j][i - j] = 1;
			}
			check(F, counting + 1);
		}
	}
}
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		total = 0;
		cin>>a;
		vector<vector<int> > C(a);
		for (int i=0; i<a; i++)
		{
			for (int j=0; j<a; j++) C[i].push_back(0);
		}
		// for (int i=0; i<a; i++)
		// {
		// 	for (int j=0; j<C[i].size(); j++) cout<<C[i][j]<<' ';
		// 	cout<<endl;
		// }
		check(C,0);
		cout<<total<<endl;
	}
}
