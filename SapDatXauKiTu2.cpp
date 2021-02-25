#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		int C[26];
		memset(C,0,sizeof(C));
		string a;
		int b;
		cin>>b>>a;
		int k = a.length()/b;
		if (a.length()%b) k++;
		for (int i=0; i<a.length(); i++)
		{
			C[a[i]-'A']++;
		}
		bool check = true;
		for (int i=0; i<26; i++)
		{
			if(C[i] > k)
			{
				check = false;
				break;
			}
		}
		check ? cout<<1 : cout<<-1;
		cout<<endl;
	}
}
