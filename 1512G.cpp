#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

ll sumdiv[10000005];
ll ans[10000005];

int main()
{
    ll t,c,i,j,x;
    ll n=1e7+5;
    for(i=1;i<=n;i++)
        for(j=i;j<=n;j+=i)
            sumdiv[j]+=i;
    
    //cout<<sumdiv[5000000]<<endl;
    for(i=1;i<=n;i++){
        if(sumdiv[i]<=n && ans[sumdiv[i]]==0)
            ans[sumdiv[i]]=i;
    }
    //cout<<ans[12402312]<<endl;
    scanf("%I64d",&t);
    while(t--){
        scanf("%I64d",&c);
        printf("%I64d\n",ans[c]==0?-1:ans[c]);
    }
    return 0;
}