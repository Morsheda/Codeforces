#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

map<ll, ll>mape;

int main()
{
    ll t,n,w,i,x,ans,ww,width,tot;
    cin>>t;
    while(t--){
        cin>>n>>w;
        mape.clear();
        for(i=0;i<n;i++){
            cin>>x;
            mape[x]++;
        }
        ans=0;
        while(1){
            ww=w;
            bool f=0;
            for(i=20;i>=0;i--){
                width=pow(2,i);
                if(mape[width]>0 && width<=ww){
                    tot=ww/width;
                    tot=min(tot,mape[width]);
                    ww-=(tot*width);
                    mape[width]-=tot;
                    f=1;
                }
            }
            if(!f)
                break;
            else
                ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}



