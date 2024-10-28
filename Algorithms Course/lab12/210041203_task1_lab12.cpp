class Solution
{
public:
  string longestNiceSubstring(string s)
  {
    if (s.size() < 2)
      return "";

    unordered_set<char> u(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {
      if (u.count(tolower(s[i])) && u.count(toupper(s[i])))
      {
        continue;
      }

      string prev = longestNiceSubstring(s.substr(0, i));
      string next = longestNiceSubstring(s.substr(i + 1));

      return prev.size() > next.size() ? prev : next;
    }

    return s;
  }
};
