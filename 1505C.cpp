#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int t;
   cin>>t;
   while(t--){
   string s;
   int n,i,x;
   int vis[28];
   memset(vis,0,sizeof(vis));
   vis[1]=1;
   vis[2]=1;
   vis[3]=1;
   vis[5]=1;
   vis[8]=1;
   vis[13]=1;
   vis[21]=1;
   cin>>s;
   n=s.size();
   bool f=1;
   for(i=0;i<n;i++){
       x=s[i]-'A';
       x++;
       if(vis[x]==0){
           f=0;
           break;
       }
   }
   if(f)
   cout<<"YES\n";
   else
   cout<<"NO\n";}
   return 0;
}
