#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100000
#define ll long long int
#define mod 1000000007
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define rev(i, a, b) for (ll i = a; i >= b; i--)

ll power(ll x,ll y){
    ll res=1;
    while(y){
        if(y&1){
            res=(res*x)%mod;
        }
        y = y/2;
        x=(x*x)%mod;
    }
    return res%mod;
}

void solve();

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}

void solve(){
    ll k;
    cin>>k;
    if(k%3==1){
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }

    
    
}