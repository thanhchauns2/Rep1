#include <bits/stdc++.h>
using namespace std;
long long steps[51];
void getit()
{
	steps[1] = 1;
	steps[2] = 2;
	steps[3] = 4;
	for (int i=4; i<51; i++) steps[i] = steps[i-1] + steps[i-2] + steps[i-3];
}
int main()
{
	getit();
	int N;
	cin>>N;
	while(N--)
	{
		int a;
		cin>>a;
		cout<<steps[a]<<endl;
	}
}
