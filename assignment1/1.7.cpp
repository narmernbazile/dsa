#include <iostream>

using namespace std;

void print_matrix(int n)
{
  int ibit = 1;
  for (int i = 1; i <= n; i++)
  {
    int jbit = ibit;
    for (int j = 1; j <= i; j++)
    {
      cout << (jbit ? "1" : "0") << " ";
      jbit = !jbit;
    }
    cout << endl;
    ibit = !ibit;
  }

}

int main()
{
  int n; cin >> n;
  print_matrix(n);
  return 0;
}