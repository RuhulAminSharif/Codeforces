#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll mx = 150000+5;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m; cin >> n >> m;
    int mn = min(n,m);
    if(mn&1) cout << "Akshat" << endl;
    else cout << "Malvika" << endl;
    return 0;
}
