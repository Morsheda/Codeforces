#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

ll arr[200005];
ll sum[900000];

int main()
{
    ll t,n,i,j,m,nn;
    cin>>t;
    while(t--){
        cin>>n;
        ll arr[n+5];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        m=n/2;
        nn=n;
        for(i=0,j=n-1;i<m && j>=m;i++,j--){
            if(arr[i]!=arr[j])
                nn-=2;
            else
                break;
        }
        cout<<nn<<endl;
    }
    return 0;
}

