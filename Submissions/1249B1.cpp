#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n+1]; for(int i=1; i<=n; i++) cin >> a[i];
        for(int i=1; i<=n; i++){
            if(a[i]==i){
                cout << 1 << " ";
            }else
            {
                int cnt=1, j=i, idx=i;
                while(a[idx]!=j)
                {
                    idx = a[idx];
                    cnt += 1;
                }
                cout << cnt << " ";
            }
        }
        cout << endl;
    }
}
