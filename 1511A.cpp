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
    ll t,n,i,j,x,one,two,three,c;
    scanf("%I64d",&t);
    while(t--){
        scanf("%I64d",&n);
        one=0;two=0;three=0;c=0;
        for(i=0;i<n;i++){
            scanf("%I64d",&x);
            if(x==1)
                one++;
            else if(x==2)
                two++;
            else 
                three++;
        }
        c=one+three;
        printf("%I64d\n",c);
    }
    return 0;
}