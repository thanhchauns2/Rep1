#include<bits/stdc++.h>
#define FOR(i, m, n) for(int i=m; i<n; i++)
#define FORD(i, m, n) for(int i=m; i>=n; i--)
#define faster() cin.tie(0); ios_base::sync_with_stdio(false);
#define endl '\n'
#define mp make_pair
#define f first
#define s second
#define reset(A) memset(A, 0, sizeof(A))
#define pb push_back
#define ll long long
using namespace std;
const int MAX = 505;
map<string, int> map_start, map_end;
queue<string> q_start, q_end;
string start_left(string s1){
	return string({s1[3], s1[0], s1[2], s1[7], s1[4],
	s1[1], s1[6], s1[8], s1[5], s1[9]});
}
 
string start_right(string s1){
	return string({s1[0], s1[4], s1[1], s1[3], s1[8],
	s1[5], s1[2], s1[7], s1[9], s1[6]});
}
 
string end_right(string s1){
	return string({s1[0], s1[2], s1[6], s1[3], s1[1],
	s1[5], s1[9], s1[7], s1[4], s1[8]});
}
 
string end_left(string s1){
	return string({s1[1], s1[5], s1[2], s1[0], s1[4],
	s1[8], s1[6], s1[3], s1[7], s1[9]});
}
 
void BFS_start(string s){
	queue<string> q; q.push(s);
	while(!q.empty()){
		string num = q.front(); q.pop();
		string s2 = start_left(num);
		string s3 = start_right(num);
		if(map_start[s2] == 0){
			q.push(s2);
			map_start[s2] = map_start[num] + 1;
		}
		if(map_start[s3] == 0){
			q.push(s3);
			map_start[s3] = map_start[num] + 1;
		}
		if(map_start[q.back()] >= 14) break;
	}
}
 
int BFS_end(string s){
	queue<string> q; q.push(s);
	while(!q.empty()){
		string num = q.front(); q.pop();
		if(map_start[num] != 0){
			return map_start[num] + map_end[num];
		}
		string rota1 = end_left(num);
		string rota2 = end_right(num);
		if(map_end[rota1] == 0){
			q.push(rota1);
			map_end[rota1] = map_end[num] + 1;
		}
		if(map_end[rota2] == 0){
			q.push(rota2);
			map_end[rota2] = map_end[num] + 1;
		}
		if(map_end[q.back()] >= 20) break;
	}
	return -1;
}
 
int main(){
	faster();
	int test; cin >> test;
	while(test--){
		string start, finish = "1238004765";
		FOR(i, 0, 10){ 
			char c; cin >> c;
			start += c;
		}
		map_start.clear();
		map_end.clear();
		BFS_start(start);
		cout << BFS_end(finish) << endl;
	}

}
