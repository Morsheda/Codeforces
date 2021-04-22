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
    ll t,n,k1,k2,dk1,dk2,w,b,dw,db,dif,dif2;
    cin>>t;
    while(t--){
        cin>>n>>k1>>k2;
        cin>>w>>b;
        dk1=n-k1;
        dk2=n-k2;
        dif=abs(k1-k2);
        dif2=abs(dk1-dk2);
        bool f=1;
        if(w>min(k1,k2)){
            dw=w-min(k1,k2);
            if(dif<2*dw)
                f=0;
        }
        if(b>min(dk1,dk2)){
            db=b-min(dk1,dk2);
            if(dif2<2*db)
                f=0;
        }

        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    return 0;
}




