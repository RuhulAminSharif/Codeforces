#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e5+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1, test = 1;
    cin >> t;
    while(t--){
        ll a, b; cin >> a >> b;
        ll ans = (a*b)/ __gcd(a,b);
        if(ans==b){
            ans =  ans * (b/a);
        }
        cout << ans << endl;
    }
    return 0;
}
