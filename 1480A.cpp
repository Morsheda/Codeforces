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
    ll t,l,i;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        l=s.size();
        for(i=0;i<l;i++){
            if(i%2){
                if(s[i]!='z')
                    s[i]='z';
                else
                    s[i]='y';
            }
            else{
                if(s[i]!='a')
                    s[i]='a';
                else
                    s[i]='b';
            }
        }
        cout<<s<<endl;
    }

    return 0;
}


