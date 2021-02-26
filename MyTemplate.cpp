// By Nguyen Thanh Chau
// a.k.a Linh's servant - Ken
// En Taro Adun! - TemplarAssasin a.k.a Zeratul

// Libraries

#include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp>
// #include <boost/math/constants/constants.hpp>
// #include <boost/cstdint.hpp>

// Defines

#define ll long long
#define pb push_back
#define cl(C) C.clear()
#define eb emplace_back
#define reset(C) memset(C,0,sizeof(C))
#define um(C,x,y) unordered_map<x,y> C
#define toSet(C,x) set<x> (C.begin(), C.end())
#define clearQueue(queue, x) queue = queue<x> ()
#define get(C,a) for(int i=0; i<a; i++) cin>>C[i]
#define fillVector(C,a) fill(C.begin(), C.end(), a)
#define toVector(C,x) vector<x> (C.begin(), C.end())
#define getVector(C) for(int i=0; i<C.size(); i++) cin>>C[i]
#define print(C,a) for(int i=0; i<a; i++) cout<<C[i]<<' '
#define printVector(C) for(int i=0; i<C.size(); i++) cout<<C[i]<<' '

// Namespaces

using namespace std;
// using namespace boost::multiprecision;
// using boost::multiprecision::cpp_dec_float_50;

int main()
{
	int F[3] = {3,4,5};
	vector<int> C(F, F+3);
	print(F,3);
}
