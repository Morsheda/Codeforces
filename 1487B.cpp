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
    ll t,n,k,pos,r,m;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n%2==0){
            pos=k%n;
        }
        else{
            m=(n/2)+1;
            if(k<m){
                pos=k%n;
            }
            else{
                r=(k-m)/(m-1)+1;
                pos=(k+r)%n;
            }
        }
        if(pos==0)
            pos=n;

        cout<<pos<<endl;
    }
    return 0;
}

