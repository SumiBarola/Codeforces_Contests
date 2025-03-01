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
    ll n;
    cin>>n;
    
    ll c=1;

    ll l=1,r=8;
    if(n==l||n==r){
        cout<<-1<<endl;
        return;
    }
    ll b1=1,b2=8;
    while (b2<n)
    {
        int temp = b2;
        b2=6*temp-b1+2;
        b1=temp;
        
    }
    if(b2==n){
        cout<<-1<<endl;
        return;
    }
    
    
    
    
    
    ll check = 1,b=0;    
    for (ll i = 0 ; i < n;i++ )
    {
        

        if(check==i+1){

            cout<<i+2<<" ";
            c=0;
            check = 6*check-(b)+2;
            b=i+1;
            // cout<<endl<<check<<endl;
            continue;

        }
        if(c){
            cout<<i+1<<" ";
        }
        else {
            cout<<i<<" ";
            c=1;}


                
    }
                
            
  
        
        cout<<endl;
        

    
    
    
    
    
}