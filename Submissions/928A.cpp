#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void conv(string& s)
{
    for(ll i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] - 'A' + 'a';
        }
        if(s[i]== '0'){
            s[i] = 'o';
        }
        if(s[i]=='1' || s[i]=='l' || s[i] == 'i'){
            s[i] = 'i';
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s, t; cin >> s;
    conv(s);
    // cout << s;
    ll n; cin >> n;
    bool fg = true;
    for(ll i=0; i<n; i++){
        cin >> t;
        conv(t);
        if(s==t){
            fg = false;
        }
    }
    if(fg) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}