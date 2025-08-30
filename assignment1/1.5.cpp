#include <iostream>

using namespace std;

void print_stars(int n)
{
  int nspaces = 0;
  for (int i = n; i >= 0; i-=2)
  {
    for (int j = 1; j <= nspaces; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    cout << endl << endl;
    nspaces += 1;
  }
}

int main()
{
  int n; cin >> n;
  print_stars(n);
  return 0;
}