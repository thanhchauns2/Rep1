#include <bits/stdc++.h>

using namespace std;
int findMaxLen(string str) 
{ 
    int n = str.length(); 
    stack<int> stk; 
    int result = 0; 
    for (int i = 0; i < n; i++) 
    { 
        if (str[i] == '(')  stk.push(i); 
        else 
        { 
            if (!stk.empty() && str[stk.top()] == '(') 
            { 
                stk.pop(); 
            } 
//            if (!stk.empty()) result = max(result, i - stk.top()); 
            else stk.push(i); 
        } 
//        cout << i << ' ' << stk.size() << endl;
    } 
    return str.length() - stk.size(); 
} 

int main()
{
    int N;
    cin>>N;
    while (N--)
    {
        string k;
        cin>>k;
        cout<<findMaxLen(k)<<endl;
    }
}
