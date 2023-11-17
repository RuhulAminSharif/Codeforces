#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll mx = 150000+5;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n, sum=0; cin >> n;
        vector<ll>divisor;
        for(ll i = 1 ; i*i<=n ; i++){
            if(n%i==0){
                divisor.push_back(i);
                sum+=i;
                if(i*i!=n){
                    divisor.push_back(n/i);
                    sum+=(n/i);
                }
            }
        }
        sort(divisor.begin() , divisor.end());
        ll a[n], ans=LLONG_MIN;
        for(ll i=0; i<n; i++) cin >> a[i];
        for(ll j=1; j<divisor.size()-1; j++){
            vector<ll>tmp;
                for(ll i=0; i<n; i++){
                    ll cnt = 0;
                     sum=0;
                    while(cnt<divisor[j]){
                        cnt += 1;
                        sum += a[i];
                        i++;
                    }
                    tmp.push_back(sum);
                    i--;
                }
            sort(tmp.begin(), tmp.end());
            ans = max(ans, abs(tmp[tmp.size()-1]-tmp[0]));
        }
        sort(a,a+n);
        ans =  max(ans,abs(a[n-1]-a[0]) );
        cout << ans << endl;
    }
    return 0;
}