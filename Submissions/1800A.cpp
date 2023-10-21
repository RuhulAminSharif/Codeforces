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
        string s; cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s.erase(unique(s.begin(), s.end()), s.end());
        // cout << s << endl;
        if(s=="meow"){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}