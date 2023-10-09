#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m; cin >> n >> m;
    bool fg=true;
    for(ll i=1; i<=n; i++){
        if(i&1){
            for(ll j=1; j<=m; j++){
                cout << "#";
            }
        }else if(fg){
            fg = false;
            for(ll j=1; j<m; j++){
                cout << ".";
            }
            cout << "#";
        }else{
            fg = true;
            cout << "#";
            for(ll j=1; j<m; j++){
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}