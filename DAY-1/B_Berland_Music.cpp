// CODE BY @namangupta28
#include <bits/stdc++.h>
using namespace std;
bool sortdesc(const pair<int, int> &a,
              const pair<int, int> &b)
{
   return a.first > b.first;
}

void solve()
{
   int n;
   cin >> n;
   int p[n];
   p[0] = 0;
   for (int i = 1; i <= n; i++)
      cin >> p[i];

   string s;
   cin >> s;

   int q[n];

   vector<pair<int, int>> mp;
   vector<pair<int, int>> cmp;

   for (int i = 1; i <= n; i++)
   {
      if (s[i - 1] == '1')
         mp.push_back({p[i], i});
      else
      {
         cmp.push_back({p[i], i});
      }
   }
   sort(mp.begin(), mp.end(), sortdesc);
   sort(cmp.begin(), cmp.end(), sortdesc);
   int cnt = n;
   for (auto it : mp)
   {
      it.first = cnt;
      cnt--;
      q[it.second] = it.first;
   }
   for (auto it : cmp)
   {
      it.first = cnt;
      cnt--;
      q[it.second] = it.first;
   }

   for (int i = 1; i <= n; i++)
   {
      cout << q[i] << " ";
   }
   cout << endl;
}
int main()
{
   int t;
   cin >> t;
   while (t--)
      solve();
   return 0;
}