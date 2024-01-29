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
        ll n, k; cin >>  n >> k;
        string s;
        char ch = 'a';
        for(ll i=0; i<k; i++) s += ch++;
        string ans;
        for(ll i=0; i<n; i++) cout << s;
        cout << endl;
    }
    return 0;
}