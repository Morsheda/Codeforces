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
    int t,n,k,i,j,hp;
    scanf("%d",&t);
    while(t--){
        cin>>n>>k;
        j=k;
        int arr[n+5];
        for(i=1;i<=n;i++){
            arr[i]=i;
        }
        if(n%2==0)
            hp=n/2-1;
        else
            hp=n/2;
        if(k>hp)
            cout<<"-1\n";
        else{
            for(i=1;i<n;i++){
                if(i%2==0 && j>0){
                    swap(arr[i],arr[i+1]);
                    j--;
                }
            }
            for(i=1;i<=n;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}