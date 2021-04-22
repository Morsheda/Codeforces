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
    ll t,n,i,s;
    cin>>t;
    while(t--){
        cin>>n;
        ll ar[n+5];
        for(i=1;i<=n;i++){
            cin>>ar[i];
        }
        s=0;
        for(i=1;i<=n;i++){
            s+=(ar[i]-1);
        }
        cout<<s<<endl;
    }
    return 0;
}

