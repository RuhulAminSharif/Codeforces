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
    cin >> t;
    for(ll test=1; test<=t; test++){
        ll n, x, ans; cin >> n;
        if(n&1){
            cout << n/2+1 << endl;
        }else{
            cout << n/2 << endl;
        }
    }
    return 0;
}
