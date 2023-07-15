#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    string a, b;
    map<string, string>mp;
    for(ll i=0; i<n; i++){
        cin >> a >> b;
        if(b=="woman") b = "child";
        mp[b] += a + '\n';
    }
    cout << mp["rat"]<<mp["child"]<<mp["man"]<<mp["captain"];
    return 0;
}