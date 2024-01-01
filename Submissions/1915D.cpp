#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e5+7;
void solve(void)
{
    ll n; cin >> n;
    string s; cin >> s;
    stack<char>q;
    for(ll i=0; i<n; i++){
        q.push(s[i]);
    }
    stack<char>st;
    while(q.size()){
        if(q.top()=='a' || q.top()=='e'){
            st.push(q.top());
            q.pop();
            st.push(q.top());
            q.pop();
            st.push('.');
        }
        else{
            st.push(q.top());
            q.pop();
            st.push(q.top());
            q.pop();
            st.push(q.top());
            q.pop();
            st.push('.');
        }
    }
    if(st.top()=='.'){st.pop();}
    while(st.size()){
        cout << st.top();
        st.pop();
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1, test = 1;
    cin >> t;
    while(t--){
        /// cout << "Case : " << test++ << endl;
        solve();
    }
    return 0;
}