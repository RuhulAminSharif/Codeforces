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
        map<string,ll>mp;
        string s1[n], s2[n],s3[n];
        for(ll i=0;i<n; i++){ cin >> s1[i];mp[s1[i]]++;}
        for(ll i=0;i<n; i++){ cin >> s2[i];mp[s2[i]]++;}
        for(ll i=0;i<n; i++){ cin >> s3[i];mp[s3[i]]++;}
        ll ans[3]={0};
        for(ll i=0; i<n; i++){
            ll x = mp[s1[i]];
            if(x>=3) ans[0] += 0;
            else if(x==2) ans[0] += 1;
            else ans[0] += 3;
        }
        for(ll i=0; i<n; i++){
            ll x = mp[s2[i]];
            if(x>=3) ans[1] += 0;
            else if(x==2) ans[1] += 1;
            else ans[1] += 3;
        }
        for(ll i=0; i<n; i++){
            ll x = mp[s3[i]];
            if(x>=3) ans[2] += 0;
            else if(x==2) ans[2] += 1;
            else ans[2] += 3;
        }
        for(ll i=0; i<3; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}