#include <bits/stdc++.h>
using namespace std;
long long Mod = 1e9 + 7;
void multiply(long long F[2][2], long long M[2][2])
{
	long long x = ((F[0][0] * M[0][0])%Mod + (F[0][1] * M[1][0])%Mod)%Mod;
	long long y = ((F[0][0] * M[0][1])%Mod + (F[0][1] * M[1][1])%Mod)%Mod;
	long long z = ((F[1][0] * M[0][0])%Mod + (F[1][1] * M[1][0])%Mod)%Mod;
	long long w = ((F[1][0] * M[0][1])%Mod + (F[1][1] * M[1][1])%Mod)%Mod;
	F[0][0] = x;
	F[0][1] = y;
	F[1][0] = z;
	F[1][1] = w;
}
void power(long long F[2][2], long long a)
{
	if (a==0 || a==1) return;
	long long M[2][2] = {{1,1},{1,0}};
	power(F, a/2);
	multiply(F, F);
	if (a%2 != 0) multiply(F,M);
}
long long Fibonacci(long long a)
{
	if (a==0) return 0;
	long long F[2][2] = {{1,1},{1,0}};
	power(F, a-1);
	return F[0][0];
}
int main()
{
    int N;
    cin>>N;
    while (N--)
    {
    	long long a;
    	cin>>a;
    	cout<<Fibonacci(a)<<endl;
	}
}
