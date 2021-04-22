#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

ll vis[105];

int main()
{
    ll t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n+5];
        memset(vis,0,sizeof(vis));
        for(i=0;i<n;i++){
            cin>>a[i];
            vis[a[i]]++;
        }
        for(i=0;i<=100;i++){
            if(vis[i]>=1){
                cout<<i<<" ";
                vis[i]--;
            }
        }
        for(i=0;i<=100;i++){
            if(vis[i]>=1){
                while(vis[i]--)
                    cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}



