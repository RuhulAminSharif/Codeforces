#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;
    cin >> t;
    for(ll test=1; test<=t; test++){
        // cout << "Case " << test << " : ";
        ll n; cin >> n;
        string s; cin >> s;
        ll one=0, zero=0;
        for(auto u : s){
            if(u=='0') zero += 1;
            else one += 1;
        }
        if(zero!=one){
            cout << -1 << endl;
            continue;
        }
        bool fg = true;
        ll l=0, r=n-1;
        while(l<=r){
            if(s[l]==s[r]){
                fg = false;
                break;
            }
            l += 1, r -= 1;
        }
        if(fg){
            cout << 0 << endl;
            cout << endl;
            continue;
        }
        vector<ll>ans;
        for(ll i=0; i<s.size(); i++){
            ll j= s.size()-i-1;
            if(s[i]==s[j]){
                if(s[i]=='0'){
                    ans.push_back(j+1);
                    string p = s.substr(0, j+1);
                    string q = s.substr(j+1, s.size()-j);
                    s = p+"01"+q;
                    // cout << "x";
                    // cout << s;
                }else{
                    ans.push_back(i);
                    string p = s.substr(0, i);
                    string q = s.substr(i,s.size()-i);
                    s = p+"01"+q;
                    // cout << "yy";
                    // cout << s;

                }
            }
        }
        cout << ans.size() << endl;
        // sort(ans.begin(), ans.end());
        for(auto u : ans) {
            cout << u << " ";
        }
        cout << endl;
    }
    return 0;
}