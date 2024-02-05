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
        ll ans = 0;
        while(n>=10){
            ans += 9;
            n /= 10;
        }
        cout << ans+n << endl;
    }
    return 0;
}
