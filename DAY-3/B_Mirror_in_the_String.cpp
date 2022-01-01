// CODE BY @namangupta28
#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin >> n;
   string s;
   cin >> s;
   string conc = "";
   string ans = "";
   for (int i = 0; i < n; i++)
   {
      conc = conc + s[i];
      ans = conc + string(conc.rbegin(), conc.rend());
      if (ans <= s)
         break;
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