#include <iostream>
#include <string>

using namespace std;

void is_palindrome(string s)
{
  bool palindrome = true;
  int i = 0;
  int j = s.length() - 1;
  while (i < j)
  {
    if (s[i] != s[j])
    {
      palindrome = false;
      break;
    }
    i++;
    j--;
  }
  cout << (palindrome ? "Yes" : "No") << endl;
}

int main()
{
  string s;
  getline(cin, s);
  is_palindrome(s);
  return 0;
}