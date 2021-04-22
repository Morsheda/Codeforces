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
    ll t,n,m,a,b,aa,bb,i,j,w,o,z;
    cin>>t;
    while(t--){
        cin>>a>>b;
        string s,ss;
        cin>>s;
        ss=s;
        aa=a;bb=b;
        n=s.size();
        m=n/2;
        w=0;o=0;z=0;
        bool f=1;
        for(i=0;i<n;i++){
            if(s[i]=='?')
                w++;
            else if(s[i]=='1')
                o++;
            else
                z++;
        }
        aa-=z;
        bb-=o;
        if(n%2==0){
        for(i=0,j=n-1;i<m && j>=m;i++,j--){
            if(s[i]==s[j]){
                if(s[i]=='?' && s[j]=='?'){
                    if(aa>=bb && aa>1){
                        s[i]='0';
                        s[j]='0';
                        aa-=2;
                    }
                    else{
                        if(bb>1){
                            s[i]='1';
                            s[j]='1';
                            bb-=2;
                        }
                        else
                            f=0;
                    }
                }
            }
            else{
                if(s[i]=='?' && s[j]=='1'){
                    if(bb>0){
                        s[i]='1';
                        bb--;
                    }
                    else{
                        f=0;
                    }
                }
                else if(s[i]=='?' && s[j]=='0'){
                    if(aa>0){
                        s[i]='0';
                        aa--;
                    }
                    else{
                        f=0;
                    }
                }
                else if(s[i]=='1' && s[j]=='?'){
                    if(bb>0){
                        s[j]='1';
                        bb--;
                    }
                    else{
                        f=0;
                    }
                }
                else if(s[i]=='0' && s[j]=='?'){
                    if(aa>0){
                        s[j]='0';
                        aa--;
                    }
                    else{
                        f=0;
                    }
                }
                else
                    f=0;
            }
        }
        }
        if(n%2==1){
            for(i=0,j=n-1;i<m && j>m;i++,j--){
            if(s[i]==s[j]){
                if(s[i]=='?' && s[j]=='?'){
                    if(aa>=bb && aa>1){
                        s[i]='0';
                        s[j]='0';
                        aa-=2;
                    }
                    else{
                        if(bb>1){
                            s[i]='1';
                            s[j]='1';
                            bb-=2;
                        }
                        else
                            f=0;
                    }
                }
            }
            else{
                if(s[i]=='?' && s[j]=='1'){
                    if(bb>0){
                        s[i]='1';
                        bb--;
                    }
                    else{
                        f=0;
                    }
                }
                else if(s[i]=='?' && s[j]=='0'){
                    if(aa>0){
                        s[i]='0';
                        aa--;
                    }
                    else{
                        f=0;
                    }
                }
                else if(s[i]=='1' && s[j]=='?'){
                    if(bb>0){
                        s[j]='1';
                        bb--;
                    }
                    else{
                        f=0;
                    }
                }
                else if(s[i]=='0' && s[j]=='?'){
                    if(aa>0){
                        s[j]='0';
                        aa--;
                    }
                    else{
                        f=0;
                    }
                }
                else
                    f=0;
            }
        }
        if(s[m]=='?'){
            if(aa>0){
                s[m]='0';
                aa--;
            }
            else{
                if(bb>0){
                    s[m]='1';
                    bb--;
                }
                else
                    f=0;
            }
        }
        else if(n==1){
            if(s[m]=='0'){
                if(aa<1)
                    f=0;
            }
            else{
                if(bb<1)
                    f=0;
            }
        }
        }
        if(aa==0 && bb==0 && f)
            cout<<s<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}

