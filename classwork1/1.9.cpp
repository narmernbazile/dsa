#include <iostream>
#include <vector>

using namespace std;

void is_palindrome(vector<int> A)
{
  int i = 0;
  int j = A.size()-1;
  bool palindrome = true;
  while (i < j)
  {
    if (A[i] != A[j])
    {
      palindrome = false;
      break;
    }
    i++;
    j--;
  }
  cout << (palindrome ? "Yes" : "No");

}

int main()
{
  int n; cin >> n;
  vector<int> A;
  for (int i = 0; i < n; i++)
  {
    int x; cin >> x;
    A.push_back(x);
  }
  is_palindrome(A);
  return 0;
}