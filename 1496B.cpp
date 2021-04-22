#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

map<ll,ll>mapp;

int main()
{
    ll t,n,k,i,j,mn,mx;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll a[n+5];
        mapp.clear();
        mn=1e10;mx=-1;
        for(i=0;i<n;i++){
            cin>>a[i];
            mapp[a[i]]++;
            mn=min(a[i],mn);
            mx=max(a[i],mx);
        }
    }
    return 0;
}


