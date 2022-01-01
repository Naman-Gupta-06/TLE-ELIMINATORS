// CODE BY @namangupta28
#include <bits/stdc++.h>
using namespace std;

void solve()
{
   int b[7];
   for (int i = 0; i < 7; i++)
   {
      cin >> b[i];
   }
   int abc = b[6];
   int aval = b[0];
   int bval = b[1];
   int cval = abc - aval - bval;
   cout << aval << " " << bval << " " << cval << endl;
}
int main()
{
   int t;
   cin >> t;
   while (t--)
      solve();
   return 0;
}