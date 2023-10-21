#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<string,ll>mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;
    ll n, ans=0; cin >> n;
    for(ll i=0; i<n; i++){
        string s; cin >> s;
        ans += mp[s];
    }
    cout << ans << endl;
    return 0;
}