#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    while(N--)
    {
        int a,b;
        cin>>a>>b;
        int C[b];
        for (int i=0; i<b; i++) cin>>C[i];
        int key = b-1;
        while (key>=0 && C[key]==a-(b-1-key)) key--;
        if (key==-1)
        {
            for (int i=0; i<b; i++) cout<<i+1<<' ';
        }
        else 
        {
            C[key]++;
            for (int i=key+1; i<b; i++) C[i] = C[key] + i - key;
            for (int i=0; i<b; i++) cout<<C[i]<<' ';
        }
        cout<<endl;
    }
}
