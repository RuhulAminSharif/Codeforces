#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    map<string, ll>mpp;
    for(ll i=0; i<n; i++)
    {
        string s; cin >> s;
        if(mpp[s]==0){
            cout << "OK" << endl;
            mpp[s] += 1;
        }
        else
        {
            cout << s << mpp[s] << endl;
            mpp[s] += 1;
        }
    }
}