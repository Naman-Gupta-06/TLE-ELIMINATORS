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
      cout << steps<<endl;
   else
   {
      sort(v.begin(), v.end());
      while (v[0] <k)
      {
         v[0]--;
         sum--;
         steps++;
      }
      int i = n;
      while (i--)
      {
         v[i] = v[0];
         sum -= (v[i] + v[0]);
         if (sum <= k)
            break;
         steps++;
      }
      cout << steps << endl;
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