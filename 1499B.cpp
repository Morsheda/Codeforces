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
    ll t,l,la,i;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        l=s.size();
        bool f=1,one=0,zero=0;
        if(l>=4){
            for(i=0;i<l-1;i++){
                if(s[i]=='1' && s[i+1]=='1'){
                    one=1;
                    break;
                }
            }
            if(one){
                for(;i<l-1;i++){
                if(s[i]=='0' && s[i+1]=='0'){
                    f=0;
                    break;
                }
            }
            }
        }
        if(!f)
            cout<<"NO\n";
        else
            cout<<"YES\n";

    }
    return 0;
}





