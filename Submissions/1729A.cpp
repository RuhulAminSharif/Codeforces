#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1LL;
    cin >> t;
    while(t--){
        ll a, b, c, first, second, ans=3; cin >> a >> b >> c;
        first = a-1;
        if(b>c) second = b-1;
        else second = (c-1)+(c-b);
        if(first<second) ans=1;
        else if(first>second) ans=2;
        cout << ans << endl;
    }
    return 0;
}
