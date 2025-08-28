#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

void to_lower(string& s)
{
  for (char& c : s)
  {
    c = (char)tolower(c);
  }
}

int vowel_count(string s)
{
  to_lower(s);
  int n = 0;
  for (char c : s)
  {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') n++;
  }
  return n;
}

int main()
{
  string s;
  getline(cin, s);
  int n = vowel_count(s);
  cout << n;
  return 0;
}