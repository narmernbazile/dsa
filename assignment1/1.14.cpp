#include <iostream>

using namespace std;

void print_solid(int n)
{
  for (int i = n; i >= 1; i--)
  {
    for (int j = 0; j < i; j++) cout << " ";
    for (int j = 0; j < n; j++) cout << "*";
    cout << endl;
  }
}

void print_hollow(int n)
{
  for (int i = 0; i < n-1; i++) cout << " ";
  for (int i = 0; i < n; i++) cout << "*";
  cout << endl;
  for (int i = n-2; i >= 1; i--)
  {
    for (int j = 0; j < i; j++) cout << " ";
    cout << "*";
    for (int j = 0; j < n-1; j++) cout << " ";
    cout << "*";
    cout << endl;
  }
  for (int i = 0; i < n; i++) cout << "*";
  cout << endl;
}

void print_rhombuses(int n)
{
  cout << "Solid Rhombus:" << endl;
  print_solid(n);
  cout << "Hollow Rhombus:" << endl;
  print_hollow(n);
}

int main()
{
  int n; cin >> n;
  print_rhombuses(n);
  return 0;
}