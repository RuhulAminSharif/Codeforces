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
    ll w[n], x;
    set<pair<ll,ll>>st;
    for(ll i=0; i<n; i++){
        cin >> w[i];
        st.insert({w[i],i+1});
    }
    string s; cin >> s;
    stack<ll>stk;
    ll ans[2*n];
    for(ll i=0; i<2*n; i++){
        if(s[i]=='0'){
            auto it = *st.begin();
            ans[i] = it.second;
            st.erase(st.begin());
            stk.push(ans[i]);
        }
        else{
            ans[i] = stk.top();
            stk.pop();
        }
    }
    for(ll i=0; i<2*n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
