#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string xx = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch; cin >> ch;
    string s; cin >> s;
    if(ch=='R'){
        for(ll i=0; i<s.size(); i++){
            ll idx = xx.find(s[i]);
            cout << xx[idx-1];
        }
    }
    else{
        for(ll i=0; i<s.size(); i++){
            ll idx = xx.find(s[i]);
            cout << xx[idx+1];
        }
    }
    cout << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string xx = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch; cin >> ch;
    string s; cin >> s;
    if(ch=='R'){
        for(ll i=0; i<s.size(); i++){
            ll idx = xx.find(s[i]);
            cout << xx[idx-1];
        }
    }
    else{
        for(ll i=0; i<s.size(); i++){
            ll idx = xx.find(s[i]);
            cout << xx[idx+1];
        }
    }
    cout << endl;
    return 0;
}