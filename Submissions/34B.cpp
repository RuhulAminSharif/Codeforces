#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, sum = 0; cin >> n >> m;
    int a[n]; for(int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    for(int i=0; i<m; i++){
        if(a[i]<0)
            sum+=abs(a[i]);
        else
            break;
    }
    cout << sum << endl;
    return 0;
}
