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
        char ch = s[0];
        int d = s[1]-'0';
        for(int i=1; i<=8; i++){
            if(d!=i){
                cout << ch << i << endl;
            }
        }
        for(char c = 'a'; c<='h' ; c++){
            if(c!=ch){
                cout << c << d << endl;
            }
        }
    }
    return 0;
}