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
    while(t--){
        ll n; cin >> n;
        string s, tmp = "Timur";
        cin >> s;
        bool fg = true;
        sort(s.begin(), s.end());
        sort(tmp.begin(), tmp.end());
        if(s!=tmp){
            fg = false;
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}