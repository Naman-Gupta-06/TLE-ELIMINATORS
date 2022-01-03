#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
int n,k;
cin>>n>>k;

char arr[n+1][n+1];
if(n==k && n>1) cout<<"-1"<<endl;
else{
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        arr[i][j]='.';
    }
}
int cnt=0;
for(int i=0;i<n;i+=2){
    for(int j=0;j<n;j++){
        if(i==j && cnt<k) {
            arr[i][j]='R';
            cnt++;
           // cout<<cnt<<" ";
        }
    }
}

if(k==cnt){
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j];
    }cout<<endl;
}

}
else cout<<"-1"<<endl;






}

}
return 0;
}