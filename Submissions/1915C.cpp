#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e5+7;
void solve(void)
{
    ll n, x; cin >> n;
    ll sum=0;
    while(n--){
        cin >> x;
        sum += x;
    }
    ll y = sqrt(sum);
    if(y*y == sum){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1, test = 1;
    cin >> t;
    while(t--){
        /// cout << "Case : " << test++ << endl;
        solve();
    }
    return 0;
}