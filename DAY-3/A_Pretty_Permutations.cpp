// CODE BY @namangupta28
#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin >> n;
   vector<int> v;

   if (n % 2 == 0)
   {
      for (int i = 2; i <= n; i += 2)
      {
         v.push_back(i);
         v.push_back(i - 1);
      }
   }
   else
   {
      v.push_back(3);
      v.push_back(1);
      v.push_back(2);
      for (int i = 5; i <= n; i += 2)
      {
         v.push_back(i);
         v.push_back(i - 1);
      }
   }
   for (auto it : v)
   {
      cout << it << " ";
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

/*

1 2 3 4 5 6 7 8





*/