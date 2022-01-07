/* Naman Gupta */
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define MOD 1000000007
#define PI 3.141592653589793238462
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define size(x) ((int)(x).size())
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.ff); cout << ","; _print(p.ss); cout << "}";}
template <class T> void _print(vector <T> v) {cout << "["; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(set <T> v) {cout << "["; for (T i : v) {_print(i); cout << " ";} cout <<"]";}
template <class T> void _print(multiset <T> v) {cout << "["; for (T i : v) {_print(i); cout << " ";} cout <<"]";}
template <class T, class V> void _print(map <T, V> v) {cout << "["; for (auto i : v) {_print(i); cout << " ";} cout <<"]";}
 /*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
bool revsort(ll a, ll b) {return a > b;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
/*--------------------------------------------------------------------------------------------------------------------------*/
 
void solve()
{
ll n;
cin>>n;
ll a=0,b=0,c=1;

n--;
vector<ll> seive=sieve(100);


for(int i=0;i<n;i++){
    a=seive[i];
    b=n-a;
    if(gcd(a,b)==1)break;
}

cout<<a<<" "<<b<<" "<<c<<endl;

}
int main()
{
int t;
cin>>t;
while(t--)solve();
return 0;
}