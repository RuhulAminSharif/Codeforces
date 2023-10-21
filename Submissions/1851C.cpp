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
        ll n, k; cin >> n >> k;
        ll a[n];
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        ll left=0, right=n-1, cnt=0;
        for(ll i=0; i<n; i++){
            if(a[i]==a[0]){
                cnt++;
            }
            if(cnt==k){
                left=i;
                break;
            }
        }
        ll cnt1=0;
        for(ll j=n-1; j>=0 && j>left; j--){
            if(a[j]==a[n-1]){
                cnt1++;
            }
            if(cnt1==k){
                right = j;
                break;
            }
        }
        if(left==n-1 || right==0 || (cnt==k && cnt1==k)){
            cout << "YES" << endl;
        }else if(cnt==k && cnt1!=k && a[left]==a[n-1]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}