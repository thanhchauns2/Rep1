#include <bits/stdc++.h>
using namespace std;
string C;
//queue<string> F;
map<string, int> to_start, to_end;

string END;

bool gotIt(string A)
{
	return A == END;
}
string left(string A)
{
	char x = A[0];
	A[0] = A[3];
	A[3] = A[4];
	A[4] = A[1];
	A[1] = x;
	return A;
}
string counter_left(string A)
{
	char x = A[0];
	A[0] = A[1];
	A[1] = A[4];
	A[4] = A[3];
	A[3] = x;
	return A;
}
string right(string A)
{
	char x = A[1];
	A[1] = A[4];
	A[4] = A[5];
	A[5] = A[2];
	A[2] = x;
	return A;
}
string counter_right(string A)
{
	char x = A[1];
	A[1] = A[2];
	A[2] = A[5];
	A[5] = A[4];
	A[4] = x;
	return A;
}
void checking()
{
	queue<string> F;
	if (gotIt(C)) return;
	F.push(C);
//	for (int i=0; i<14;i++)
	while(!F.empty())
	{
//		for (int j=0; j<pow(2,i); j++)
//		{
			string k; k=F.front(); F.pop();
			int i = to_start[k];
			if (!to_start[left(k)]) 
			{
				to_start[left(k)] = i+1;
				F.push(left(k));
			}
			if (!to_start[right(k)]) 
			{
				to_start[right(k)] = i+1;
				F.push(right(k));
			}
			if (to_start[F.back()] >= 14) return;
//		}
	}
}
int check()
{
	if (gotIt(C)) return 0;
//	F = queue<string>();
	queue<string> F;
	F.push(END);
//	for (int i=0; i<=20 ; i++)
	while(!F.empty())
	{
//		for (int j=0; j<pow(2,i); j++)
//		{
			string k; k = F.front(); F.pop();
			int i = to_end[k];
			if (to_start[k]) return to_start[k] + to_end[k];
			if (!to_end[counter_left(k)])
			{
				to_end[counter_left(k)]= i+1;
				F.push(counter_left(k));
			}
			if (!to_end[counter_right(k)])
			{
				to_end[counter_right(k)] = i+1;
				F.push(counter_right(k));
			}
			if (to_end[F.back()] >= 20) return -1;
//		}
	}
	return -1;
//	F.push(C);
//	string k,k1,k2;
//	for (int i=0; ;i++)
//	{
//		for (int j=0; j<pow(2,i); j++)
//		{
//			k = F.front();
//			F.pop();
//			k1 = left(k);
//			if (gotIt(k1)) return i+1;
//			k2 = right(k);
//			if (gotIt(k2)) return i+1;
//			F.push(k1);
//			F.push(k2);
//		}
//	}
}
int main()
{
	C.resize(6);
	END.resize(6);
	int N;
	cin>>N;
	while(N--)
	{
		cin>>C[0]>>C[1]>>C[2]>>C[3]>>C[4]>>C[5];
		cin >> END[0] >> END[1] >> END[2] >> END[3] >> END[4] >> END[5];
		to_start.clear();
		to_end.clear();
		checking();
		cout<<check()<<endl;
	}
}
