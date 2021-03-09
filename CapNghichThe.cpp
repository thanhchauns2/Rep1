#include <bits/stdc++.h>
using namespace std;
long long count1=0;
vector<long long> Merge(vector<long long> C, long long a)
{
	if (a < 2) return C;
	vector<long long> left(C.begin(), C.begin() + (a/2));
	vector<long long> right(C.begin() + (a/2) , C.end());
	// for (long long i=0; i<left.size(); i++) cout<<left[i]<<' ';
	// cout<<endl;
	// for (long long i=0; i<right.size(); i++) cout<<right[i]<<' ';
	// cout<<endl;
	left = Merge(left, left.size());
	right = Merge(right, right.size());
	long long i=0, j=0, k=0;
	while (i<left.size() && j<right.size())
	{
		if (left[i] <= right[j])
		{
			C[k] = left[i];
			k++;
			i++;
		}
		else
		{
			C[k] = right[j];
			k++;
			j++;
			count1 += (left.size() - i);
		}
	}
	while (i < left.size())
	{
		C[k] = left[i];
		i++;
		k++;
	}
	while (j < right.size())
	{
		C[k] = right[j];
		j++;
		k++;
	}
	return C;
}
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		count1 = 0;
		long long a;
		cin>>a;
		vector<long long> C;
		C.resize(a);
	//	long long C[a];
		for(long long i=0; i<a; i++) cin>>C[i];
		C = Merge(C,a);
		cout<<count1<<endl;
	}
}
