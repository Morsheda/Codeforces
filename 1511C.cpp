#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

ll vis[60];
ll pos[60];

ll poww(ll base,ll expn){
    ll result=1;
    while (expn != 0) {
        result *= base;
        expn--;
    }
    return result;
}

int main()
{
    ll n,i,j,x,q,qi,lim;
    memset(vis,0,sizeof(vis));
    memset(pos,0,sizeof(pos));
    cin>>n>>q;
    for(i=1;i<=n;i++){
        cin>>x;
        if(vis[x]==0){
            vis[x]++;
            pos[x]=i;
        }
        else
            vis[x]++;
    }
    bool f=0;
    for(i=1;i<=q;i++){
        cin>>qi;
        cout<<pos[qi]<<" "; 
        for(j=1;j<=50;j++){
            if(pos[j]!=0 && pos[j]<=pos[qi] && j!=qi)
                pos[j]++;
        }
        pos[qi]=1;
    }
    cout<<endl;
    return 0;
}