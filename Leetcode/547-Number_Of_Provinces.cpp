#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void dfs(int node, vector<int>adj[], int vis[])
{
    vis[node] = 1;
    for(auto x : adj[node]){
        if(!vis[x]){
            dfs(x, adj, vis);
        }
    }
}
int findCircleNum(vector<vector<int>>& isConnected)
{
    int node = isConnected[0].size();
    vector<int>adj[node];
    for(int i=0; i<node; i++){
        for(int j=0; j<node; j++){
            if(isConnected[i][j] && i != j){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    int vis[201] = {0};
    int cnt = 0;
    for(int i=0; i<node; i++){
        if(!vis[i]){
            cnt += 1;
            dfs(i, adj, vis);
        }
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<vector<int>>mat{{1,1,0},{1,1,0},{0,0,1}};
    int ans = findCircleNum(mat);
    cout << ans << endl;
    return 0;
}