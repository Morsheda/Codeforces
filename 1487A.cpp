#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

ll arr[105];

int main()
{
    ll t,n,i,x,mn,s;
    cin>>t;
    while(t--){
        cin>>n;
        memset(arr,0,sizeof(arr));
        mn=999;
        for(i=0;i<n;i++){
            cin>>x;
            mn=min(mn,x);
            arr[x]++;
        }
        s=0;
        for(i=1;i<=100;i++){
            if(i==mn)
                continue;
            else
                s+=arr[i];
        }
        cout<<s<<endl;
    }
    return 0;
}

