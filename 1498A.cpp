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
    ll t,n,l,i,sum,num,r,ans,gc;
    cin>>t;
    while(t--){
        cin>>n;
        num=n;
        sum=0;
        while(num>0){
            r=num%10;
            sum+=r;
            num/=10;
        }
        //cout<<sum<<endl;
        for(i=n;;i++){
            num=i;
            sum=0;
            while(num>0){
                r=num%10;
                sum+=r;
                num/=10;
            }
            gc=__gcd(i,sum);
            if(gc>1){
                ans=i;
                break;
            }
            sum++;
        }
        cout<<ans<<endl;
    }

    return 0;
}



