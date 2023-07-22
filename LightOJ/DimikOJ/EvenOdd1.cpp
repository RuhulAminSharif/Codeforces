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
        if((s[s.size()-1]-'0')%2==0) cout << "even" << endl;
        else cout << "odd" << endl;
    }
    return 0;
}