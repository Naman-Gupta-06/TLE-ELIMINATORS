// CODE BY @namangupta28
#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
      cin >> arr[i];
   map<int, int> mp;
   for (int i = 0; i < n; i++)
   {
      mp[abs(arr[i])]++;
   }
   int cnt = 0;
   for (auto it : mp)
   {
      if (it.second == 1 || it.first == (-it.first))
         cnt++;
      if (it.second >= 2 && it.first != (-it.first))
      {
         cnt += 2;
      }
   }
   cout << cnt << endl;
}
int main()
{
   int t;
   cin >> t;
   while (t--)
      solve();
   return 0;
}