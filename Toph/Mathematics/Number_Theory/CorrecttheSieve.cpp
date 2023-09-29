#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e6+10;
vector<bool>vis(mx);
set<ll>prime;
void sieve()
{
    vis[0]=vis[1] = true;
    //all prime divisors of a number is before the square root of a number
    // 49 -> 7 prime divisors of 1 - 49  must be in 2 3 4 5 6 7
    for(ll i=3; i*i<=mx;i+=2){
        if(vis[i]==false){
            //i*i because there 3 -> 9 if we do i+i then 6 but it has been cut down already in time of 2
            //2*i so that we can skip the even numbers
            for(ll j=i*i; j<=mx; j+=2*i){
                vis[j]=true;
            }
        }
    }
    prime.insert(2);
    for(ll i=3; i<=mx; i+=2){
        if(vis[i]==false){
            prime.insert(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sieve();
    ll n; cin >> n;
    while(n--){
        ll x; cin >> x;
        if(prime.find(x)!=prime.end()){
            cout << x << " is a prime number." << endl;
        }else{
            cout << x << " is not a prime number." << endl;
        }
    }
    return 0;
}