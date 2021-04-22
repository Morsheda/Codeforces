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
    ll t,n,i,j,m;
    cin>>t;
    while(t--){
        string s,ss="",ssr="",sl="",sr="";
        cin>>s;
        n=s.size();
        bool f=1;
        ss=s;
        ss+="a";
        ssr=ss;
        reverse(ssr.begin(),ssr.end());
        if(ss==ssr){
            ss.clear();
            ss="a";
            ss+=s;
        }
        for(i=0;i<n;i++){
            if(s[i]!='a')
                f=0;
        }
        if(f)
            cout<<"NO\n";
        else{
            cout<<"YES\n";
            cout<<ss<<endl;
        }
    }
    return 0;
}

