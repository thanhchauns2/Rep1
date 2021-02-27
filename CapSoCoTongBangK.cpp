#include <bits/stdc++.h>
using namespace std;
long long check(int a)
{
    if (a==0) return 0;
    if (a==1) return 1;
    return a + check(a-1);
}
int main()
{
    int N;
    cin>>N;
    while (N--)
    {
        int a,b;
        cin>>a>>b;
        int C[a];
        for (int i=0; i<a; i++) cin>>C[i];
        sort (C,C+a);
        int left=0, right1=a-1;
        int k=0, k1=0;
        long long sum=0;
        while (left<right1)
        {
            if (C[left] + C[right1] < b) left++;
            else if (C[left] + C[right1] > b) right1--;
            else if (C[right1] == C[left])
            {
                sum+=check(right1-left);
                break;
            }
            else
            {
                while (left < right1-1 && C[left]==C[left+1])
                {
                    left++;
                    k++;
                }
                while (right1 > left+1 && C[right1]==C[right1-1])
                {
                    right1--;
                    k1++;
                }
                //cout<<C[left]<<' '<<C[right1]<<endl;
                left++;
                k++;
                right1--;
                k1++;
                //cout<<k<<' '<<k1<<endl;
                sum+=(k*k1);
                k1=0;
                k=0;
            }
        }
        cout<<sum<<endl;
    }
}
