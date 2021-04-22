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
    ll t,n,i,m,c0,c1,c2,ans;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n+5];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        m=n/3;
        c0=0;c1=0;c2=0;ans=0;
        for(i=0;i<n;i++){
            if(a[i]%3==0)
                c0++;
            if(a[i]%3==1)
                c1++;
            if(a[i]%3==2)
                c2++;
        }

        //cout<<ans<<endl;
    }
    return 0;
}



