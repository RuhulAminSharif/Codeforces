#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string p, q; 
    getline(cin , p);
    getline(cin, q);
    ll cnt1[150]={0}, cnt2[150]={0};
    bool fg = true;
    for(int i=0; i<p.size(); i++) if(p[i]!=' ') cnt1[p[i]]++;
    for(int i=0; i<q.size(); i++) if(q[i]!=' ') cnt2[q[i]]++;
    for(int i=0; i<150; i++){
        if(cnt2[i]>cnt1[i]){
            fg = false;
            break;
        }
    }
    if(fg) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
