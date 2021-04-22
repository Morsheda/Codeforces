#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

int main()
{
    ll t,n,i,j,sq;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n+5];
        for(i=0;i<n;i++)
            cin>>a[i];
        bool f=0;
        for(i=0;i<n;i++){
            sq=sqrt(a[i]);
            if(sq*sq!=a[i]){
                f=1;break;
            }
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}