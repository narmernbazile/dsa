#include <iostream>
#include <unordered_map>

using namespace std;

char get_letter(int n)
{
  if (n > 26 || n < 1) return '\0';
  unordered_map<int, char> M = {
    {1,'A'},
    {2,'B'},
    {3,'C'},
    {4,'D'},
    {5,'E'},
    {6,'F'},
    {7,'G'},
    {8,'H'},
    {9,'I'},
    {10,'J'},
    {11,'K'},
    {12,'L'},
    {13,'M'},
    {14,'N'},
    {15,'O'},
    {16,'P'},
    {17,'Q'},
    {18,'R'},
    {19,'S'},
    {20,'T'},
    {21,'U'},
    {22,'V'},
    {23,'W'},
    {24,'X'},
    {25,'Y'},
    {26,'Z'},
  };
  return M[n];
}

void print_letters(int n) // ask about this one
{
  for (int i = n; i >= 1; i--) // for i from n down to 1
  {
    for (int j = n; j >= i; j--) // for j from n down to i
    {
      cout << get_letter(j) << " ";
    }
    cout << endl;
  }
}

int main()
{
  int n; cin >> n;
  print_letters(n);
  return 0;
}