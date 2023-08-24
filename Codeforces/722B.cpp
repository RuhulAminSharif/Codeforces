#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n" 
bool check(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y') return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    ll p[n]; for(ll i=0; i<n; i++) cin >> p[i];
    bool fg = true;
    for(ll i=0; i<n; i++){
        char c; cin >> c;
        string s; getline(cin,s);
        s = c+s;
        // cout << s << " ";
        ll cnt=0;
        for(ll j=0; j<s.size(); j++){
            cnt += check(s[j]);
        }
        // cout << cnt << " ";
        if(p[i]!=cnt){
            fg = false;
            break;
        }
        
    }
    if(fg) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}