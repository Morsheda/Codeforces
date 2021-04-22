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
    ll t,n,u,v,i,d,c,ans;
    cin>>t;
    while(t--){
        cin>>n>>u>>v;
        ll obst[n+5];
        for(i=1;i<=n;i++){
            cin>>obst[i];
        }
        c=0;ans=1e18;
        for(i=1;i<n;i++){
            d=abs(obst[i]-obst[i+1]);
            if(d>=2){
                ans=0;
                break;
            }
            else{
                if(d==1){
                    c=min(u,v);
                }
                else{
                    c=min((2*v),(u+v));
                }
                ans=min(ans,c);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

