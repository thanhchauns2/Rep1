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
        vector<vector<int> > C;
        C.resize(a+1);
        while(b--)
        {
            int token, token2;
            cin>>token>>token2;
            C[token].push_back(token2);
            C[token2].push_back(token);
        }
        for (int i=1; i<=a; i++) 
        {
            sort(C[i].begin(), C[i].end());
            cout<<i<<": ";
            for (int j=0; j<C[i].size(); j++) cout<<C[i][j]<<' ';
            cout<<endl;
        }
    }
}
