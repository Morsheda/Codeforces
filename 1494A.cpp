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
    ll t,n,i,c,res;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        n=s.size();
        bool f=1;
        c=0;res=0;
        if(s[0]==s[n-1])
            f=0;
        else{
            char x=s[0],y=s[n-1];
            for(i=0;i<n;i++){
                if(s[i]==x)
                    s[i]='(';
                if(s[i]==y)
                    s[i]=')';
            }
            //cout<<s<<endl;
            for(i=0;i<n;i++){
                if(s[i]=='(')
                    c++;
                else{
                    if(c!=0){
                        c--;
                        res+=2;
                    }
                }
            }
            //cout<<res<<endl;
            if(res!=n){
                c=0;res=0;
                for(i=0;i<n;i++){
                    if(s[i]!=')')
                        c++;
                    else{
                        if(c!=0){
                            c--;
                            res+=2;
                        }
                    }
                }
                if(res!=n)
                    f=0;
            }
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
