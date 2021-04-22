#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

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
    ll t,a,b,c,x,y,gc,i,j;
    scanf("%I64d",&t);
    while(t--){
        scanf("%I64d%I64d%I64d",&a,&b,&c);
        x=poww(10,a-1);
        y=poww(10,b-1);
        gc=poww(10,c-1);
        if(__gcd(x,y)!=gc){
            if(x<y){
                x+=gc;
            }
            else{
                y+=gc;
            }
        }
        
        printf("%I64d %I64d\n",x,y);
    }
    return 0;
}