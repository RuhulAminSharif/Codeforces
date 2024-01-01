#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e5+7;
void solve(void)
{
    string s; cin >> s;
    int len = s.size();
    for(int i=0; i<len; i++){
        if(s[i]<s[len-1] && !((s[i]-'0')&1)){
            swap(s[i], s[len-1]);
            cout << s << endl;
            return ;
        }
    }
    for(int i=len-1; i>=0; i--){
        if(!((s[i]-'0')&1)){
            swap(s[i], s[len-1]);
            cout << s << endl;
            return ;
        }
    }
    cout << "-1" << endl;
    return ;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1, test=0;
    /// cin >> t;
    while(t--){
        /// cout << "Case : " << ++test << endl;
        solve();
    }
    return 0;
}
