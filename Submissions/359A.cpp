#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    bool fg = false;
    for(int i=0; i<n; i++){
        if(a[i][0]){
            fg = true;
            break;
        }
        if(a[i][m-1]){
            fg = true;
            break;
        }
    }
    for(int i=0; i<m; i++){
        if(a[0][i]){
            fg = true;
            break;
        }
        if(a[n-1][i]){
            fg = true;
            break;
        }
    }
    if(fg) cout << 2;
    else cout << 4;
    cout << endl;
    return 0;
}