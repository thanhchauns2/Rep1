#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    vector<int> C;
    C.resize(a);
    for (int i=0; i<a; i++) cin>>C[i];
    int token;
    for (int i=0; i<a; i++)
    {
        token = i;
        for (int j=i+1; j<a; j++)
        {
            if (C[token]>C[j]) token = j;
        }
        swap(C[i], C[token]);
        if (i==a-1) continue;
        cout<<"Buoc "<<i+1<<": ";
        for (int j=0; j<a; j++)
        {
            cout<<C[j]<<' ';
        }
        cout<<endl;
    }
}
