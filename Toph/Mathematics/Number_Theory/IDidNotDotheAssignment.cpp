#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1000+5;
vector<bool>vis(mx);
void sieve()
{
    vis[0]=vis[1] = true;
    for(ll i=3; i*i<=mx;i+=2){
        if(vis[i]==false){
            for(ll j=i*i; j<=mx; j+=2*i){
                vis[j]=true;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    ll n; cin >> n;
    if(n%2==0 || vis[n]==true ){
        for(ll i=0; i<n; i++){
            cout << "I DID NOT DO THE ASSIGNMENT." << endl;
        }
    }else{
        cout << "NO PUNISHMENT" << endl;
    }
    return 0;
}
