#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

ll vis[105];
ll pos[105];

int main()
{
    ll t,n,i,x,ans;
    cin>>t;
    while(t--){
        cin>>n;
        ll arr[n+5];
        memset(vis,0,sizeof(vis));
        memset(pos,0,sizeof(pos));
        for(i=1;i<=n;i++){
            cin>>x;
            arr[i]=x;
            vis[x]++;
        }
        for(i=1;i<=n;i++){
            
            if(vis[arr[i]]==1){
                ans=i;break;
            }
        }
        
        cout<<ans<<endl;
    }
    return 0;
}