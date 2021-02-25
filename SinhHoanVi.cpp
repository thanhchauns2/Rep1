#include <bits/stdc++.h>
using namespace std;
int a;
int C[11], F[11];
void Result()
{
	for (int i=1; i <= a; i++) cout<<C[i];
	cout<<' ';
}
void Try(int x)
{
	for (int i = 1; i <= a; i++)
	{
		if (F[i] == 0) 
		{
			C[x] = i;
			F[i] = 1;
			if (x == a) Result();
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
		cin>>a;
		Try(1);
		cout<<endl;
	}
}
