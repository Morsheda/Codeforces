#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

vector<pll>v,va;

int main()
{
    ll t,n,i,x,y,prv,ff,ss;
    cin>>t;
    while(t--){
        cin>>n;
        ll tm[n+5],d[n+5];
        v.clear();va.clear();
        for(i=0;i<n;i++){
            cin>>x>>y;
            d[i]=y-x;
            v.pb(mp(x,y));
        }
        for(i=0;i<n;i++)
            cin>>tm[i];
        va.pb(mp(v[0].first+tm[0]))
        for(i=1;i<n;i++){
            prv=v[i-1].second;
            ff=v[i].first;
            ss=v[i].second;
            x=(ff-prv)
            va.pb(mp(x,y));
        }
    }

    return 0;
}




