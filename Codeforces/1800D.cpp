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
        ll n, cnt=0; cin >> n;
        string s; cin >> s;
        for(ll i=2; i<n; i++){
            cnt += s[i-2]==s[i];
        }
        cout << n-(cnt+1) << endl;
    }
    return 0;
}