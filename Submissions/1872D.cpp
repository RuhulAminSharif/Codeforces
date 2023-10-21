#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t, k=0; cin >> t;
    while(t--){
        ll n, x, y; cin >> n >> x >> y;
        ll p = n/x;
        ll q = n/y;
        ll r = (x*y)/__gcd(x,y);
        ll d = n/r;
        // cout << d << endl;
        p -= d;
        q -= d;
        // cout << p << " " << q << endl;
        cout << n*(n+1)/2 - (n-p)*(n-p+1)/2 - q*(q+1)/2 << endl;
    }
    return 0;
}