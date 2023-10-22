#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ll t=1;
    cin >> t;
    for(ll test=1; test<=t; test++){
        ll n, cnt=0; cin >> n;
        string s; cin >> s;
        for(ll i=0; i<n; i++){
            if(s[i]=='0'){
                cnt += 1;
            }
        }
        reverse(s.begin(), s.end());
        ll sum=0;
        vector<int>pos;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                pos.push_back(i);
            }
        }
        ll k=0;
        for(ll i=0; i<cnt; i++){
            if(s[i]=='0'){
                cout << sum << " ";
                k++;
            }else{
                s[i] = '0';
                s[pos[k]] = '1';
                sum += (pos[k]-i);
                k++;
                // pos[i]='1';
                cout << sum << " ";
            }
        }
        for(ll i=cnt+1; i<=n; i++){
            cout << -1 << " ";
        }
        cout << endl;
    }
    return 0;
}
