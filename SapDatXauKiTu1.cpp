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
		cin>>a;
		int k = a.length()/2;
		if (a.length()%2) k++;
		for (int i=0; i<a.length(); i++)
		{
			C[a[i]-'a']++;
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
