// CODE BY @namangupta28
#include <bits/stdc++.h>
using namespace std;

void solve()
{

   int n;
   cin >> n;
   vector<string> v;
   for (int i = 0; i < n - 2; i++)
   {
      string x;
      cin >> x;
      v.push_back(x);
   }
   string ans = "";

   for (auto i = 0; i < v.size(); i++)
   {
      ans += v[i][0];
      if (v[i][1] != v[i + 1][0])
         ans += v[i][1];
   }
   cout << ans << endl;
}
int main()
{
   int t;
   cin >> t;
   while (t--)
      solve();
   return 0;
}