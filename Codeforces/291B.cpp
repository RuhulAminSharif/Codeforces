#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    getline(cin, s);
    for(ll i=0; i<s.size(); i++){
        if(s[i]=='"'){
            cout << '<';
            i++;
            while(i<s.size()&&s[i]!='"'){
                cout << s[i++];
            }
            cout << '>' << endl;
        }else if(s[i]!=' '){
            cout << '<';
            while(i<s.size()&&s[i]!=' '){
                cout << s[i++];
            }
            cout << '>' << endl;
        }
    }
    return 0;
}