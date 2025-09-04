#include <iostream>

using namespace std;

void print_tie(int n)
{

  int nspaces = (n % 2 == 0 ? n-2 : n-3);
  for (int i = 1; i < n/2; i++) // print top half
  {
    for (int j = 1; j <= i; j++) cout << "*";
    for (int j = 1; j <= nspaces; j++) cout << " ";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
    nspaces -= 2;
  }

  for (int i = 1; i <= (n % 2 == 0 ? n : n-1); i++) // print middle
  {
    cout << "*";
  }
  cout << endl;

  nspaces = 2;
  for (int i = n/2-1; i >= 1; i--) // print bottom half
  {
    for (int j = 1; j <= i; j++) cout << "*";
    for (int j = 1; j <= nspaces; j++) cout << " ";
    for (int j = 1; j <= i; j++) cout << "*";
    cout << endl;
    nspaces += 2;
  }

}

int main()
{
  int n; cin >> n;
  print_tie(n);
  return 0;
}