// CODE BY @namangupta28
#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin >> n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }
   int ans = 0;
   for (int i = 0; i + 5 < n; i += 2)
   {
      if (__gcd(arr[i], arr[i + 2]) == __gcd(arr[i + 2], arr[i + 4]))
      {
         ans = __gcd(arr[i], arr[i + 2]);
      }
      else if (__gcd(arr[i + 1], arr[i + 3]) == __gcd(arr[i + 3], arr[i + 5]))
      {
         ans = __gcd(arr[i + 1], arr[i + 3]);
      }
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