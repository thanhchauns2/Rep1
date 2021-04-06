#include <bits/stdc++.h>

using namespace std;

vector<int> pset;

class graph {
	int V;
	list<int>* l;
public:
	graph(int V)
	{
		this->V = V;
		l = new list<int>[V];
	}
	void addedge(int V1, int V2)
	{
		l[V1].push_back(V2);
		l[V2].push_back(V1);
	}
	int bfs(int in1, int in2);
};

graph g(0);

void SieveOfEratosthenes(vector<int>& v)
{
	int n = 9999;
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));
	for (int p = 2; p * p <= n; p++) 
	{
		if (prime[p] == true) 
		{
			for (int i = p * p; i <= n; i += p) prime[i] = false;
		}
	}
	for (int p = 1000; p <= n; p++) if (prime[p]) v.push_back(p);
}

int graph::bfs(int in1, int in2)
{
	int visited[V];
	memset(visited, 0, sizeof(visited));
	queue<int> que;
	visited[in1] = 1;
	que.push(in1);
	list<int>::iterator i;
	while (!que.empty()) 
	{
		int p = que.front();
		que.pop();
		for (i = l[p].begin(); i != l[p].end(); i++) 
		{
			if (!visited[*i]) 
			{
				visited[*i] = visited[p] + 1;
				que.push(*i);
			}
			if (*i == in2) 
			{
				return visited[*i] - 1;
			}
		}
	}
}

bool compare(int num1, int num2)
{
	string s1 = to_string(num1);
	string s2 = to_string(num2);
	int c = 0;
	if (s1[0] != s2[0]) c++;
	if (s1[1] != s2[1]) c++;
	if (s1[2] != s2[2]) c++;
	if (s1[3] != s2[3]) c++;
	return (c == 1);
}

int shortestPath(int num1, int num2)
{
	int in1, in2;
	for (int j = 0; j < pset.size(); j++) if (pset[j] == num1) in1 = j;
	for (int j = 0; j < pset.size(); j++) if (pset[j] == num2) in2 = j;
	return g.bfs(in1, in2);
}

void Proceed()
{
	SieveOfEratosthenes(pset);
	graph g1(pset.size());
	g = g1;
	for (int i = 0; i < pset.size(); i++) for (int j = i + 1; j < pset.size(); j++) if (compare(pset[i], pset[j])) g.addedge(i, j);	
}

int main()
{
	Proceed();
	int num1 = 1033, num2 = 8179;
	int N;
	cin >> N;
	while (N--)
	{
		cin >> num1 >> num2;
		cout << shortestPath(num1, num2);
		cout << endl;
	}
}
