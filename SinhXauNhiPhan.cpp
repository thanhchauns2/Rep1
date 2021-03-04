#include <bits/stdc++.h>
using namespace std;
int a;
int C[11];
void Result()
{
	for (int i=1; i <= a; i++) cout<<C[i];
	cout<<' ';
}
void Try(int x)
{
	for (int i = 0; i <= 1; i++)
	{
		C[x] = i;
		if (x == a) Result();
		else Try(x+1);
	}
}
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		cin>>a;
		Try(1);
		cout<<endl;
	}
}
