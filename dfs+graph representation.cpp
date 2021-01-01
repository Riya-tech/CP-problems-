//dfs, graph representation, finding the number of components
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 17;
int n, m, k;
vector<int> g[maxn];
bool mark[maxn];
void dfs(int v){
	mark[v] = 1;
	for(auto u : g[v])
		if(!mark[u])
			dfs(u);
}
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n >> m >> k;
	for(int i = 0; i < m; i++){
		int v, u;
		cin >> v >> u;
		v--, u--;
		g[v].push_back(u);
		g[u].push_back(v);
	}
	int cnt = 0;
	//this is to find the number of components of the graph if a node is unvisited we apply dfs(in which we mark the nodes visited) no of times we find the node unvisited that many components
	for(int i = 0; i < n; i++)
		if(!mark[i]){
			cnt++;
			dfs(i);
		}

		if(cnt>k)cout<<-1;
		else cout<<m - n +k;
}
