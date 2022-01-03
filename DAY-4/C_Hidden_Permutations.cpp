#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int p[n+1];
    int q[n+1];
    for(int i=1;i<=n;i++)cin>>p[i];
    for(int i=1;i<=n;i++) q[i]=i;

    for(int i=0;i<2*n;i++){
        q[i]=q[p[i]];

    }

     for(int i=1;i<=n;i++) {
         cout<<
     }





}

int main()
{
int t;
cin>>t;
while(t--) solve();
return 0;
}