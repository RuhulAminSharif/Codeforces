#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
string to3(ll a)
{
    string s="";
    while(a){
        s += (a%3+'0');
        a/=3;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s; cin >> s;
    bool fg = false;
    if(s[0]=='-'){
        fg = true;
        s.erase(s.begin());
    }
    ll cnt=0, idx=-1;
    for(ll i=0; i<s.size(); i++){
        if(s[i]=='.'){
            idx = i;
            break;
        }else{
            cnt += 1;
        }
    }
    string ans;
    if(fg){
        ans = "($";
    }else{
        ans = "$";
    }
    ll comma = cnt%3;
    for(ll i=0; i<comma; i++){
        ans += s[i];
    }
    ll tmp;
    if(idx==-1){
        tmp = s.size();
    }else{
        tmp = idx;
    }
    ll c=0;
    for(ll i=comma; i<tmp; i++){
        if(i&&!c){
            ans += ',';
        }
        ans += s[i];
        if(c==2){
            c = 0;
        }else{
            c += 1;
        }
    }
    if(idx==-1){
        ans += ".00";
    }else{
        ans += '.';
        for(ll i=idx+1; i<=idx+2; i++){
            if(i>=s.size()){
                ans += '0';
            }else{
                ans += s[i];
            }
        }
    }
    if(fg){
        ans += ')';
    }
    cout << ans << endl;
    return 0;
}