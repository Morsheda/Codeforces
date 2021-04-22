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
        ll h[n+5];
        for(i=0;i<n;i++){
            cin>>h[i];
        }
        s=0;bool f=1;
        for(i=0;i<n;i++){
            if(h[i]>=i)
                s+=(h[i]-i);
            else{
                h[i]+=s;
                s=0;
                if(h[i]>=i)
                    s+=(h[i]-i);
                else{
                    f=0;
                    break;
                }
            }
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}



