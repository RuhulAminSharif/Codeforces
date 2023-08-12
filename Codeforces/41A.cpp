#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n" 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s, t; cin >> s >> t;
    reverse(s.begin(),s.end());
    if(s==t) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}