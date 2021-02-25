#include <bits/stdc++.h>
using namespace std;
int C[10] = {1,2,5,10,20,50,100,200,500,1000};
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int a;
		cin>>a;
		int total=0;
		for (int i=9; i>=0; i--)
		{
			while(C[i] <= a)
			{
				a -= C[i];
				total++;
			}
		}
		cout<<total<<endl;
	}
}
