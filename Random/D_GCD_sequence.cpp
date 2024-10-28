#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b)
{
  while (b)
  {
    a = a % b;
    swap(a, b);
  }
  return a;
}

void solve()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    if (n == 3)
    {
      cout << "YES" << endl;
      continue;
    }

    vector<int> prefix_gcd(n), suffix_gcd(n);
    prefix_gcd[0] = a[0];
    for (int i = 1; i < n; i++)
    {
      prefix_gcd[i] = gcd(prefix_gcd[i - 1], a[i]);
    }

    suffix_gcd[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
      suffix_gcd[i] = gcd(suffix_gcd[i + 1], a[i]);
    }

    bool possible = false;

    for (int i = 0; i < n; i++)
    {
      bool valid = true;
      if (i > 0 && i < n - 1)
      {
        if (gcd(prefix_gcd[i - 1], suffix_gcd[i + 1]) > gcd(a[i - 1], a[i + 1]))
        {
          valid = false;
        }
      }
      if (i == 0 && gcd(suffix_gcd[1], suffix_gcd[2]) < suffix_gcd[1])
      {
        valid = false;
      }
      if (i == n - 1 && gcd(prefix_gcd[n - 2], prefix_gcd[n - 3]) < prefix_gcd[n - 2])
      {
        valid = false;
      }
      if (valid)
      {
        possible = true;
        break;
      }
    }

    cout << (possible ? "YES" : "NO") << endl;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}
