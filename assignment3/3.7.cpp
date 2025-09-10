#include <iostream>

using namespace std;

int my_sqrt(int x)
{
  if (x < 0) return -1;

  int i = 0;
  while (i*i <= x) i++;
  return i - 1;
}

int main()
{
  int x = 8;
  int _ = my_sqrt(x);
  cout << _ << endl;
  return 0;
}