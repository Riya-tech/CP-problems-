//dfs using stacks

#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 17;

int main()
{
	ios::sync_with_stdio(0), cin.tie(0);

        int n,i,j,c;
        cin>>n;
        vector<int> adj[n];
        bool visited[n]={false};
        for(int i = 0; i < n-1; i++)
        {
		int v, u;
		cin >> v >> u;
		adj[v].push_back(u);
		adj[u].push_back(v);
	    }

	    stack <int> s;
	    s.push(0);
	    while(s.size())
        {

                    visited[s.top()]=true;
                    c=s.top();
                    s.pop();
                    for(j=0;j<adj[c].size();j++)
                    {
                        if(!visited[adj[c][j]]){s.push(adj[c][j]);}
                    }
                    cout<<c<<endl;


        }

	return 0;
}
