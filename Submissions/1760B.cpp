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
        int n; cin >> n;
        string s; cin >> s;
        sort(s.begin(), s.end());
        cout << s.back()-'a'+1 << endl;
    }
    return 0;
}