#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll x; cin >> x;
    if(x%5==0) x/=5;
    else x = x/5 + 1;
    cout << x << endl;
    return 0;
}