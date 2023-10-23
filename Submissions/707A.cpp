#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ll t=1;
    // cin >> t;
    for(ll test=1; test<=t; test++){
        ll n, m; cin >> n >> m;
        char ch;
        bool fg = false;
        for(ll i=0; i<n; i++){
            for(ll j=0; j<m; j++){
                cin >> ch;
                if(ch=='C' || ch=='M'||ch=='Y'){
                    fg = true;
                }
            }
        }
        if(fg) cout << "#Color" << endl;
        else cout << "#Black&White" << endl;
    }
    return 0;
}
