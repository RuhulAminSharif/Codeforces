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
    for(ll test=1; test<=t; test++){
        ll n, sum=0, ans=0, k=1; cin >> n;
        while(sum<n){
            ans+=1;
            sum += k;
            k*=3;
        }
        cout<<"Case "<<test<<": "<< ans <<endl;
    }
    return 0;
}