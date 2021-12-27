// CODE BY @namangupta28
#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int l1, l2, l3;
   cin >> l1 >> l2 >> l3;
   if (l1 + l2 == l3 || l2 + l3 == l1 || l3 + l1 == l2)
      cout << "YES" << endl;
   else if (l1 % 2 == 0 && l2 == l3)
      cout << "YES" << endl;
   else if (l2 % 2 == 0 && l1 == l3)
      cout << "YES" << endl;
   else if (l3 % 2 == 0 && l1 == l2)
      cout << "YES" << endl;
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