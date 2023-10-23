#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ll t=1;
    cin >> t;
    for(ll test=1; test<=t; test++){
        vector<int>s(4);
        for(int i=0; i<4; i++){
            cin >> s[i];
        }
        bool fg = true;
        vector<int>tmp=s;
        sort(tmp.rbegin(), tmp.rend());
        if((s[0]==tmp[0]&& s[1]==tmp[1])||(s[1]==tmp[0]&& s[0]==tmp[1])){
            fg = false;
        }else if((s[2]==tmp[0]&& s[3]==tmp[1])||(s[3]==tmp[0]&& s[2]==tmp[1])){
            fg = false;
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
