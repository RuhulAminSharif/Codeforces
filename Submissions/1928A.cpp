#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mod = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    for(ll test =1; test<=t; test++){
        ll a, b; cin >> a >> b;
        bool fg = true;
        if(a&1 && b&1){
            fg = false;
        }
        else if((a&1) && b/2==a){
            fg = false;
        }
        else if((b&1) && a/2==b){
            fg = false;
        }
        else if(a==1 && b==1){
            fg = false;
        }
        if(fg) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
