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
    ll t,p,a,b,c,mn,mx,ans,ra,rb,rc;
    cin>>t;
    while(t--){
        cin>>p>>a>>b>>c;
        ans=1e18;
        if(p<=a){
            ra=a-p;
        }
        else{
            ra=p%a;
            if(ra==0)
                ans=0;
            else
                ra=a-ra;
        }
        if(p<=b){
            rb=b-p;
        }
        else{
            rb=p%b;
            if(rb==0)
                ans=0;
            else
                rb=b-rb;
        }
        if(p<=c){
            rc=c-p;
        }
        else{
            rc=p%c;
            if(rc==0)
                ans=0;
            else
                rc=c-rc;
        }

        ans=min(ans,ra);
        ans=min(ans,rb);
        ans=min(ans,rc);

        cout<<ans<<endl;

    }

    return 0;
}



