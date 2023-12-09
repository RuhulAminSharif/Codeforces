#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        string s; cin >> s;
        vector<ll>low, cap;
        map<ll, char>mpp;
        ll small=-1, big=-1;
        for(ll i=0; i<s.size(); i++){
            if(s[i]=='b')
            {
                if(low.size()>0){
                    mpp[low.back()] = '.';
                    low.pop_back();
                }
            }
            else if(s[i]=='B')
            {
                if(cap.size()>0){
                    mpp[cap.back()] = '.';
                    cap.pop_back();
                }
            }
            else{
                mpp[i] = s[i];
                if(s[i]>='a'){
                    low.push_back(i);
                }
                else
                {
                    cap.push_back(i);
                }
            }
        }
        for(ll i=0; i<s.size(); i++){
            if(isalpha(mpp[i])){
                cout << mpp[i];
            }
        }
        cout << endl;
    }
    return 0;
}