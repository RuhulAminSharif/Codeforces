#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<string>vec;
    string tmp;
    ll len=-1;
    while(getline(cin,tmp)){
        vec.push_back(tmp);
        len = max(len, (ll)tmp.size());
    }
    for(ll i=1; i<=(len+2); i++){
        cout << "*";
    }
    cout << endl;
    bool fg=true;
    for(ll i=0; i<vec.size(); i++){
        ll len1 = len - vec[i].size();
        string t1, t2;
        if(len1&1){
            if(fg){
                fg = false;
                for(ll i=0; i<len1/2; i++){
                    t1 += ' ';
                }
                t2 = t1 + ' ';
            }else{
                fg = true;
                for(ll i=0; i<len1/2+1; i++){
                    t1 += ' ';
                }
                t2 = t1;
                t2.pop_back();
            }
        }else{
            for(ll i=0; i<len1/2; i++){
                t1 += ' ';
            }
            t2 = t1;
        }
        cout << "*" << t1 << vec[i] << t2 << "*" << endl;
    }
    for(ll i=1; i<=(len+2); i++){
        cout << "*";
    }
    cout << endl;
    return 0;
}