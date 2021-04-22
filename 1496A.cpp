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
    ll t,n,k,m,i,j;
    cin>>t;
    while(t--){
        cin>>n>>k;
        string s;
        cin>>s;
        m=n/2;
        for(i=0,j=n-1;i<m && j>=m;i++,j--){
            if(s[i]==s[j])
                continue;
            else{
                break;
            }
        }
        //cout<<i<<" "<<j<<endl;
        if(i>=k && n>=(2*k+1))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

