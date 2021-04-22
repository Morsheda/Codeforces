#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define pll pair<long long,long long>

vector<pll>v;

int main()
{
    ll t,n,i,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        v.clear();
        for(i=0;i<n;i++){
            cin>>x>>y;
            v.pb(mp(x,y));
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }

    return 0;
}




