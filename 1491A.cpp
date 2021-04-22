#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

vector<ll>v;

int main()
{
    ll n,t,i,x,a,b,one=0,zero=0;
    cin>>n>>t;
    ll arr[n+5];
    for(i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]==1)
            one++;
        else
            zero++;
    }
    while(t--){
        cin>>a>>b;
        if(a==1){
            if(arr[b]==1){
                arr[b]=0;
                one--;
                zero++;
            }
            else{
                arr[b]=1;
                zero--;
                one++;
            }
        }
        if(a==2){
            if(b<=one)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
    }
    return 0;
}

