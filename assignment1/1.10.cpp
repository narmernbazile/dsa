#include <iostream>

using namespace std;

void print_rhombus(int n)
{
  int nspaces = 0;
  for (int i = n/2; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++) cout << "*";
    for (int j = 1; j <= nspaces; j++) cout << " ";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
    nspaces += 2;
  }

  nspaces = (n % 2 == 0 ? n-2 : n-3);
  for (int i = 1; i <= n/2; i++)
  {
    for (int j = 1; j <= i; j++) cout << "*";
    for (int j = 1; j <= nspaces; j++) cout << " ";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
    nspaces -= 2;
  }
}

int main()
{
  int n; cin >> n;
  print_rhombus(n);
  return 0;
}