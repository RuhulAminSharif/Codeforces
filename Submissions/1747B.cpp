#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(n&1) cout << n/2 +1 << endl;
        else cout << n/2 << endl;
        ll l=1, r=3*n;
        while(l<r){
            cout << l << " " << r << endl;
            l += 3;
            r -= 3;
        }
    }
    return 0;
}
