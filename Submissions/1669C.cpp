#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    int n, even1 = 0, even2 = 0, odd1 = 0, odd2 = 0;
    cin >> n;
        for(int i = 0; i < n; ++i) {
            int x; cin >> x;
            if(i % 2 == 0) {
                if(x % 2 == 1) odd1 = 1;
                else even1 = 1; 
            } else {
                if(x % 2 == 1) odd2 = 1;
                else even2 = 1;
            }
        }

        if((even1 && odd1)||((even2 && odd2))) {
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}