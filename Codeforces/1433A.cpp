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
        string s; cin >> s;
        cout << (s[0]-'0'-1)*10+ s.size()*(s.size()+1)/2 << endl;
    }
    return 0;
}