#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; 
    string s, ans; cin >> n >> s;
    ll a = count(s.begin(), s.end(), 'A');
    if(a>(n-a)) ans = "Anton";
    else if(2*a==n) ans = "Friendship";
    else ans = "Danik";
    cout << ans << endl;
    return 0;
}