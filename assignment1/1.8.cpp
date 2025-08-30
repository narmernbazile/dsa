#include <iostream>

using namespace std;

void print_numbers(int n)
{
  int nspaces = (2*n) - 2;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++) // print numbers on the left
    {
      cout << j;
    }
    for (int j = 1; j < nspaces; j++) // print spaces in the middle
    {
      cout << " ";
    }
    for (int j = i; j > 0; j--) // print numbers on the right
    {
      cout << j;
    }
    nspaces -= 2;
    cout << endl;
  }
}

int main()
{
  int n; cin >> n;
  print_numbers(n);
  return 0;
}