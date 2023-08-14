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
    vector<string>a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    for(ll i=0; i<a[0].size(); i++){
        set<char>st;
        for(ll j=0; j<n; j++){
            if(a[j][i]!='?'){
                st.insert(a[j][i]);
            }
        }
        if(st.size()==1) cout << *st.begin();
        else if(st.size()>1) cout << "?";
        else cout << 'a';
    }
    return 0;
}