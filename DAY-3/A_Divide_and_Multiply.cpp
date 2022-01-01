// CODE BY @namangupta28
#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin >> n;
   vector<int> arr;
   int sum = 0;
   for (int i = 0; i < n; i++)
   {
      int x;
      cin >> x;
      arr.push_back(x);

      sum += x;
   }

   int j = n - 1;
   if (n > 1)
   {
      sort(arr.begin(), arr.end());
      for (int i = 0; i < n - 1; i++)
      {
         while (arr[i] % 2 == 0)
         {
            sum = sum - (arr[i] / 2);
            arr[i] = arr[i] / 2;
            arr[j] = arr[j] * 2;
            sum = sum + arr[j];
         }
         cout << arr[i] << " ";
      }
      cout << arr[n - 1] << endl;
   }

   cout << sum << endl;
}
int main()
{
   int t;
   cin >> t;
   while (t--)
      solve();
   return 0;
}