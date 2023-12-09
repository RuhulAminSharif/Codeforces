#include<bits/stdc++.h>
#define ll long long
using namespace std;
string ans = "CCC";
string s[3];
bool vis[3][3];
/// 8-directional array
ll x[8] = {-1,-1,-1,0,0,1,1,1};
ll y[8] = {-1,0,1,-1,1,-1,0,1};
void dfs(ll r, ll c, string current)
{
    current += s[r][c];
    if(current.size()==3){
        ans = min(ans, current);
        return ;
    }
    vis[r][c]=true;
    for(int k=0; k<8; k++){
        ll nr=r+x[k], nc=c+y[k];
        if(nr>=0 && nr<3 && nc>=0 && nc<3 && !vis[nr][nc]){
            dfs(nr,nc,current);
        }
    }
    vis[r][c]=false;
    return ;
}
int main()
{
    for(int i=0; i<3; i++){
        cin >> s[i];
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            dfs(i,j, "");
        }
    }
    cout << ans << endl;
}