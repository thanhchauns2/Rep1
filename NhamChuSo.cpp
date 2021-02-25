#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	N=1;
	while(N--)
	{
		string a,b;
		cin>>a>>b;
		string c = a, d = b;
		for (int i=0; i<c.length(); i++) if (c[i]=='5') c[i]='6';
		for (int i=0; i<d.length(); i++) if (d[i]=='5') d[i]='6';
		for (int i=0; i<a.length(); i++) if (a[i]=='6') a[i]='5';
		for (int i=0; i<b.length(); i++) if (b[i]=='6') b[i]='5';
		cout<<stoi(a)+stoi(b)<<' '<<stoi(c)+stoi(d)<<endl;
		// cout<<a<<' '<<b<<' '<<c<<' '<<d<<endl;
	}
}
