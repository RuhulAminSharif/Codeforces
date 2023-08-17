#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s, p = "hello", t; cin >> s;
    for(int i=0, j=0; i<s.size();i++){
        if(s[i]==p[j]){
            t.push_back(s[i]);
            j+=1;
        }
    }
    if(p==t) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
