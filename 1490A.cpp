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
    ll t,n,i,x,y,s;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n+5];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        s=0;
        for(i=0;i<n-1;i++){
            x=max(a[i],a[i+1]);
            y=min(a[i],a[i+1]);
            if(x<=2*y)
                continue;
            else{
                while(x>2*y){
                    if(x%2==0)
                        x/=2;
                    else{
                        x/=2;
                        x++;
                    }
                    s++;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}


