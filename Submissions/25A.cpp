#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, even=0, odd=0, idx1, idx2, x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x&1){ odd+=1; idx1=i+1;}
        else{even+=1; idx2=i+1;}
    }
    if(odd==1) cout << idx1 << endl;
    else cout << idx2 << endl;
}