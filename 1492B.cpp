#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

ll vis[100005];

int main()
{
    ll t,n,i,j,x,l,r,p;
    cin>>t;
    while(t--){
        cin>>n;
        ll ar[n+5];
        memset(vis,0,sizeof(vis));
        for(i=1;i<=n;i++){
            cin>>x;
            ar[i]=x;
        }
        l=n;r=n;
        for(i=n;i>=1;i--){
            if(ar[i]==r){
                for(j=i;j<=l;j++){
                    cout<<ar[j]<<" ";
                    vis[ar[j]]=1;
                }
                l=i-1;
                while(vis[r] && r>0)
                    r--;
            }
        }
        cout<<endl;
    }

    return 0;
}




