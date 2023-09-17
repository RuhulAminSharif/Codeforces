#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, k; cin >> n >> k;
    ll dp[n+1][k+1]={0};
    for(ll i=0; i<=n; i++){
        dp[i][1] = 1;
        dp[i][0] = 0;
    }
    for(ll i=1; i<=k; i++){
        dp[0][i] = 0;
        dp[1][i] = i;
    }
    return 0;
}