#include <iostream>

using namespace std;

void print_stars(int n)
{
  int nspaces = n/2;
  for (int i = 1; i <= n; i += 2)
  {
    for (int j = 0; j < nspaces; j++) cout << " ";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
    nspaces--;
  }
  nspaces = 0;
  for (int i = n; i >= 0; i -= 2)
  {
    for (int j = 0; j < nspaces; j++) cout << " ";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
    nspaces++;
  }
}

int main()
{
  int n; cin >> n;
  print_stars(n);
  return 0;
}