#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mx = 1e3+10;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a, b, c; cin >> a >> b >> c;
    ll ans = a + b + c;
    ans = max(ans, (a + b) * c);
	ans = max(ans, a * (b + c));
	ans = max(ans, a * b * c);
	cout << ans << endl;
    return 0;
}