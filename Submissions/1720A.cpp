#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll a, b, c, d; cin >> a >> b >> c >> d;
        ll x = a*d, y = b*c;
        if(x==y) cout << 0 << endl;
        else if(x==0 || y==0) cout << 1 << endl;
        else if(x%y==0 || y%x==0) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}
