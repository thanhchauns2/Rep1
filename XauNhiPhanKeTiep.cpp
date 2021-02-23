#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        string a;
        cin>>a;
        int key = a.length()-1;
        while (key>=0 && a[key]=='1') key--;
        if (key==-1) for (int i=0; i<a.length(); i++) cout<<0;
        else
        {
            a[key] = '1';
            for (int i=key+1; i<a.length(); i++) a[i] = '0';
            cout<<a;
        }
        cout<<endl;
        // cout<<key<<endl;
    }
}
