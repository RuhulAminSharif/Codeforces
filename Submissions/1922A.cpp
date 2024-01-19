#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; cin >> t;
    while(t--){
        ll n; cin >> n;
        string a, b, c; cin >> a >> b >> c;
        bool fg = false;
        for(ll i=0; i<n; i++){
            if(a[i]!=c[i] && b[i]!=c[i]){
                fg = true;
            }
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
