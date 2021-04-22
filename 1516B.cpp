#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

ll m=1000000007;

ll power(ll a,ll b){
    if(b==0)return 1;
    ll x=power(a,b/2);
    x=x*x;
    if(b%2)x=x*a;
    return x;//x=a^b
}

ll bigmod(ll a,ll b){
    if(b==0)
        return 1%m;
    ll x=bigmod(a,b/2);
    x=(x*x)%m;
    if(b%2==1)
        x=(x*a)%m;
    return x;//x=(a^b)%m
}

ll factorial(ll n){
    ll res=1%m;
    while(n>0){
        res=((res%m)*(n%m))%m;
        n--;
    }
    return res;
}

int main()
{
    ll t,n,i,sx,sxs,cnt;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n+5];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sx=a[0];
        for(i=1;i<n;i++){
            sx^=a[i];
        }
        //cout<<sx<<endl;
        sxs=0;cnt=0;
        for(i=0;i<n;i++){
            sxs^=a[i];
            if(sxs==sx){
                sxs=0;
                cnt++;
            }
        }
        if(sx==0)
            cout<<"YES\n";
        else{
            if(cnt>=2)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}