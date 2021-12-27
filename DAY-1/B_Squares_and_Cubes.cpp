// CODE BY @namangupta28
#include <iostream>
#include <set>
using namespace std;

void solve()
{
   set<int> st;
   int n;
   cin >> n;
   for (int i = 1; i * i <= n; i++)
   {
      st.insert(i * i);
   }
   for (int i = 1; i * i * i <= n; i++)
   {
      st.insert(i * i * i);
   }
   cout << st.size() << endl;
}
int main()
{

   int t;
   cin >> t;
   while (t--)
      solve();
   return 0;
}