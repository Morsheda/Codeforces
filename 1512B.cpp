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
    ll t,n,i,j,col1,col2,row1,row2;
    cin>>t;
    while(t--){
        cin>>n;
        char arr[n+5][n+5];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        bool f=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(arr[i][j]=='*'){
                    if(!f){
                        f=1;
                        row1=i;col1=j;
                    }
                    else{
                        row2=i;col2=j;
                    }
                }
            }
        }
        if(col1==col2){
            if(col1!=(n-1)){
                arr[row1][col1+1]='*';
                arr[row2][col2+1]='*';
            }
            else{
                arr[row1][col1-1]='*';
                arr[row2][col2-1]='*';
            }
        }
        else if(row1==row2){
            if(row1!=(n-1)){
                arr[row1+1][col1]='*';
                arr[row2+1][col2]='*';
            }
            else{
                arr[row1-1][col1]='*';
                arr[row2-1][col2]='*';
            }
        }
        else{
            arr[row1][col2]='*';
            arr[row2][col1]='*';
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<arr[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}

