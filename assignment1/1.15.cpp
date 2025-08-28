#include <iostream>

using namespace std;

void print_rhombus(int n)
{
  int nspaces = n/2;
  for (int i = 1; i < (n/2)+1; i++)
  {
    for (int j = 0; j < nspaces; j++) cout << " ";
    for (int j = i; j > 1; j--) cout << j;
    for (int j = 1; j <= i; j++) cout << j;
    nspaces--;
    cout << endl;
  }
  for (int i = (n/2)+1; i >= 1; i--)
  {
    for (int j = 0; j < nspaces; j++) cout << " ";
    for (int j = i; j > 1; j--) cout << j;
    for (int j = 1; j <= i; j++) cout << j;
    nspaces++;
    cout << endl;
  }
}

int main()
{
  int n; cin >> n;
  print_rhombus(n);
  return 0;
}