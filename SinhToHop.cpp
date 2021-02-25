#include <bits/stdc++.h>
using namespace std;
int a,b;
int C[11], F[11];
void Result()
{
	for (int i=1; i <= a; i++) cout<<C[i];
	cout<<' ';
}
void Try(int x)
{
	for (int i = C[x-1]+1; i <= b - a + x; i++)
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
		cin>>b>>a;
		Try(1);
		cout<<endl;
	}
}
