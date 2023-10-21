#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, d, ans=0, m; cin >> n >> d;
    ll a[101];
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> m;
    sort(a, a+n);
    for(ll i=n; i<101; i++){
        a[i] = -d;
    }
    for(ll i=0; i<m; i++){
        ans += a[i];
    }
    cout << ans << endl;
    return 0;
}