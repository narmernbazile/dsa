#include <iostream>

using namespace std;

void print_parity(int x)
{
  cout << (x % 2 == 0 ? "Even" : "Odd");
}

int main()
{
  int x; cin >> x;
  print_parity(x);
  return 0;
}