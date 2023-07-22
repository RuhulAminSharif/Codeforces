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
        ll n; cin >> n;
        ll a[n]; for(ll i=0; i<n; i++) cin >> a[i];
        ll ans=0, left=0, right=n-1, left_sum=a[0], right_sum=a[n-1];
        while (left<right){
            if(left_sum==right_sum){
                ans =  max(ans, left+1+n-right);
            }
            if(left_sum<=right_sum){
                left += 1;
                left_sum += a[left];
            }else if(right_sum<left_sum){
                right -= 1;
                right_sum += a[right];
            }
        }
        cout << ans << endl;
        
    }
    return 0;
}