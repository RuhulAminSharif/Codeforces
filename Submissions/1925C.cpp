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
        ll n, k, m; cin >> n >> k >> m;
        string s; cin >> s;
        string ans;
        set<char>st;
        for(auto it : s){
            st.insert(it);
            if(st.size()==k){
                ans.push_back(it);
                st.clear();
            }
        }
        if(ans.size()>=n) cout << "YES" << endl;
        else{
            cout << "NO" << endl;
            char missed;
            for(ll i=0; i<k; i++){
                char ch = (char)('a'+i);
                if(st.find(ch) == st.end()){
                    missed = ch;
                    break;
                }
            }
            ans += string(n-ans.size(), missed);
            cout << ans << endl;
        }
    }
    return 0;
}
