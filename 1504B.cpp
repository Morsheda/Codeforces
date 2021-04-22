#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

vector<ll>aa,bb;

int main()
{
    ll t,n,i,j,x,y;
    cin>>t;
    while(t--){
        string a,b;
        cin>>n;
        cin>>a>>b;
        aa.clear();bb.clear();
        bool f=1;
        x=0;y=0;
        for(i=0;i<n;i++){
            x+=(2*(a[i]-'0')-1);
            y+=(2*(b[i]-'0')-1);
            
            aa.pb(x);
            bb.pb(y);
        }
        /*for(i=0;i<n;i++){
            cout<<aa[i];
        }
        cout<<endl;
        for(i=0;i<n;i++){
            cout<<bb[i];
        }
        cout<<endl;*/
        
        for(i=0;i<n;i++){
            if(aa[i]!=bb[i] && aa[i]!=-bb[i]){
                f=0;
                break;
            }
        }
        //cout<<aa.back()<<endl;
        //cout<<bb.back()<<endl;
        if(aa.back()!=bb.back())
            f=0;
        
        if(!f)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}

