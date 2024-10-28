#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define ll long long

void muqtu()
{
  ll n;
  cin >> n;
  string s;
  cin >> s;

  ll zero = 0, one = 0;
  ll conZero = 0, conOne = 0;
  ll maxZero = 0, maxOne = 0;

  for (char c : s)
  {
    if (c == '0')
    {
      zero++;
    }
    else
    {
      one++;
    }
  }

  // cout << one << " " << zero << endl;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '0')
    {
      conZero++;
      maxZero = max(conZero, maxZero);
      conOne = 0; // Reset conOne since we encountered a '0'
    }
    else
    {
      conOne++;
      maxOne = max(conOne, maxOne);
      conZero = 0; // Reset conZero since we encountered a '1'
    }
  }

  // Calculate maximum cost
  ll ans = max(max(maxZero * maxZero, maxOne * maxOne), zero * one);

  cout << ans << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  ll t;
  cin >> t;
  while (t--)
  {
    muqtu();
  }

  return 0;
}
