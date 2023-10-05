#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a, b, ans=0;
    cin >> a >> b;
    while(a<=b){
        ans += 1;
        a*=3;
        b*=2;
    }
    cout << ans << endl;
    return 0;
}