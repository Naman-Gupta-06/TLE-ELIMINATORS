// CODE BY @namangupta28
#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin >> n;
   vector<long long> v;
   if (n >= 8)
   {
      if (n % 2 == 0)
      {
         v.push_back(2);
         n /= 2;
      }

      for (int i = 3; i * i < n; i++)
      {
         if (n % i == 0 && v.size() < 2)
         {
            n = n / i;
            v.push_back(i);
         }
      }
      if (v.size() == 2 && (n != v[0] && n != v[1] && n != 1))
      {
         cout << "YES" << endl;
         cout << v[0] << " " << v[1] << " " << n << endl;
      }
      else
         cout << "NO" << endl;
   }
   else
      cout << "NO" << endl;
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
n
a,b,c>=2

min n>=8








*/