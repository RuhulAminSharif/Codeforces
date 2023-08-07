#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, even=0, odd=0;
    cin >> n;
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        if(x&1) odd += 1;
        else even += 1;
    }
    if(odd&1) cout << odd << endl;
    else cout << even << endl;
    return 0;
}