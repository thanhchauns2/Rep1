#include <bits/stdc++.h>
using namespace std;
int a;
char C[11];
int F[11];
string k;
void Result()
{
	for (int i=1; i <= k.size(); i++) cout<<C[i];
	cout<<' ';
}
void Try(int x)
{
	for (int i = 0; i < k.size(); i++)
	{
		if (F[i] == 0) 
		{
			C[x] = k[i];
			F[i] = 1;
			if (x == k.size()) Result();
			else Try(x+1);
			F[i] = 0;
		}
	}
}
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		memset(F,0,sizeof(F));
		cin>>k;
		Try(1);
		cout<<endl;
	}
}
