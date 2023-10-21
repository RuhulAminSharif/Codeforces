#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; char ch; set<char>st;
    cin >> n;
    for(ll i=0; i<n; i++){
        cin >> ch;
        st.insert(tolower(ch));
    }
    if(st.size()==26) cout << "YES";
    else cout << "NO";
    cout << endl;
    return 0;
}