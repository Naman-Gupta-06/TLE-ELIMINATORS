// CODE BY @namangupta28
#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n, k;
   cin >> n >> k;
   vector<int> v;
   int sum = 0;
   for (int i = 0; i < n; i++)
   {
      int x;
      cin >> x;
      sum += x;
      v.push_back(x);
   }
   int steps = 0;
   if (sum <= k)
      cout << steps;
   else
   {
      auto min = min_element(v.begin(), v.end());
      auto max = max_element(v.begin(), v.end());
   }
}
int main()
{
   int t;
   cin >> t;
   while (t--)
      solve();
   return 0;
}