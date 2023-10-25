#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
const int mx = 1e6+1;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>a(n), b(n);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        int mna = *min_element(a.begin(), a.end());
        int mnb = *min_element(b.begin(), b.end());
        long long ans = 0;
        for(int i=0; i<n; i++){
            ans += max(a[i]-mna, b[i]-mnb);
        }
        cout << ans << endl;
    }
}
