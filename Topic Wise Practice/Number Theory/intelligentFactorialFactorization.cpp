#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define faster                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
#define pb push_back
#define f first
#define s second

vector<bool> mark(110, false);
vector<ll> primes;

ll cas = 0;

void primeFactors(ll n, map<ll, ll> &mp)
{
  for (int i = 2; i <= n; i++)
  {
    if (n % i == 0)
    {
      ll count = 0;
      while (n % i == 0)
      {
        count++;
        n /= i;
      }
      mp[i] += count;
    }
  }
  if (n > 1)
  {
    mp[n]++;
  }
}

void sieve()
{
  for (int i = 2; i <= 110; i++)
  {
    mark[i] = true;
  }
  for (int i = 2; i * i <= 110; i++)
  {
    if (mark[i] == true)
    {
      for (int j = i * i; j <= 110; j += i)
      {
        mark[j] = false;
      }
    }
  }
  for (int i = 2; i <= 110; i++)
  {
    if (mark[i])
    {
      primes.push_back(i);
    }
  }
}

void muqtu()
{
  ll n;
  map<ll, ll> mp;
  cas++;
  cin >> n;
  for (ll i = 0; i <= n; i++)
  {
    primeFactors(i, mp);
  }
  cout << "Case " << cas << ": " << n << " = ";
  bool f = 0;
  for (auto [i, x] : mp)
  {
    if (f)
      cout << " * ";
    cout << i;
    if (x >= 1)
      cout << " (" << x << ")";
    f = 1;
  }
  cout << endl;
}

int main()
{
  faster;
  ll t;
  cin >> t;
  sieve();
  while (t--)
  {
    muqtu();
  }
  return 0;
}
