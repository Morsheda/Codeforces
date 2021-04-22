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
    ll t,n,i,j,mx1,mx2,sm1,sm2,pos,baad;
    cin>>t;
    while(t--){
        cin>>n;
        ll b[n+10];
        sm1=0;sm2=0;
        for(i=0;i<n+2;i++){
            cin>>b[i];
            sm1+=b[i];
        }
        sm2=sm1;
        sort(b,b+n+2);
        sm1-=b[n+1];
        sm2-=b[n];
        bool f=0;
        for(i=0;i<n+1;i++){
            if(sm1-b[i]==b[n+1]){
                f=1;
                pos=i;
                baad=n+1;
                break;
            }
        }
        if(!f){
            for(i=0;i<n+2;i++){
                if(i!=n){
                    if(sm2-b[i]==b[n]){
                        f=1;
                        pos=i;
                        baad=n;
                        break;
                    }
                }
            }
        }
        if(!f)
            cout<<-1<<endl;
        else{
            for(i=0;i<n+2;i++){
                if(i!=baad && i!=pos)
                    cout<<b[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}