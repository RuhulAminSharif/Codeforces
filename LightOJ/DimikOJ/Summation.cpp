#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    for(ll k=1; k<=t; k++){
        ll n; cin >> n;
        cout << "Sum = " << n%10+n/10000 << endl;
    }
    return 0;
}