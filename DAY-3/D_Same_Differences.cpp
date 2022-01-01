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
   map<long long, long long> mpp;

   for (int i = 0; i < n; i++)
   {
      int val = arr[i] - i;
      mpp[val]++;
   }
   long long sum = 0;
   for (auto it : mpp)
   {
      if (it.second >= 2)
      {
         sum += (it.second * (it.second - 1)) / 2;
      }
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

/*

3 2 1 -2 -1 -2
*/