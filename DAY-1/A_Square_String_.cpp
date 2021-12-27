// CODE BY @namangupta28
#include <iostream>
using namespace std;

string isSquare(string s)
{
   if (s.size() > 1 && s.size() % 2 != 1)
   {
      int mid = s.size() / 2;
      for (int i = 0; i < mid; i++)
      {
         if (s[i] != s[mid + i])
            return "NO";
      }
   }
   else
      return "NO";
   return "YES";
}

void solve()
{
   string s;
   cin >> s;
   cout << isSquare(s) << endl;
}
int main()
{
   int t;
   cin >> t;
   while (t--)
      solve();
   return 0;
}