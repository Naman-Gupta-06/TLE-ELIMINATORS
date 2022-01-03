#include <bits/stdc++.h>
using namespace std;

struct segment{
    int l;
    int r;
    int c;
};
int main()
{

    
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<segment> v;

for(int i=0;i<n;i++){
    int l,r,c;
    cin>>l>>r>>c;
    struct segment s={l,r,c};
    v.push_back(s);
}
vector<int> ans;
ans.push_back(v[0].c);



}
return 0;
}