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
    ll n,x,k;
    cin>>n>>x>>k;
    string s;
    cin>>s;
    ll temp = x;
    ll ans=0;
    ll temp_k = -1;
    ll arr=1;
    int l=0,r=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='L'){
            l++;
        }
        else r++;

        if(r==l){
            arr=i+1;
            break;
        }
    }
    
    for (ll i = 0; i < n ; i++)
    {
        if(s[i]=='L'){
            temp--;
        }
        else temp++;
        if(!temp){
            temp_k = i+1;
            ans++;
            break;
        }

    }
    if(temp){
        cout<<ans<<endl;
        return;
    }
    
    if(l==r){
        ans=ans+((k-temp_k)/arr);
    }
    // else{
    //     ans=ans+((k-temp_k)/arr);
    // }
    


    cout<<ans<<endl;
    
    
    
}