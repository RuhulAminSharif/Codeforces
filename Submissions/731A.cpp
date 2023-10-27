#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; cin >> s;
    char ch = 'a';
    ll ans=0;
    for(ll i=0; i<s.size(); i++){
        ans += min(abs(ch-s[i]), abs(26-abs(ch-s[i])));
        ch = s[i];
    }
    cout << ans << endl;
}