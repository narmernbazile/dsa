#include <iostream>

using namespace std;

void print_box(int n)
{
  for (int i = n; i >= 1; i--) cout << "*";
  cout << endl;
  for (int i = 1; i < n-1; i++)
  {
    cout << "*";
    for (int j = 1; j <= n-2; j++) cout << " ";
    cout << "*";
    cout << endl;
  }
  for (int i = n; i >= 1; i--) cout << "*";
  cout << endl;
}

int main()
{
  int n; cin >> n;
  print_box(n);
  return 0;
}