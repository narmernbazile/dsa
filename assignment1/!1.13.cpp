#include <iostream>

using namespace std;

void print_numbers(int n)
{
  for (int i = (n/2)+1; i >= 1; i--)
  {
    int counter = (n/2)+1;
    int max = (n/2)+1;
    int min = i;
    for (int j = 1; j <= n/2; j++) 
    {
      cout << counter;
      if (counter > min) counter--;
    }
    cout << "|" << counter << "|";
    for (int j = n/2; j >= 1; j--) 
    {
      cout << counter;
    }
    cout << endl;
  }

  // for (int i = 1; i < (n/2)+1; i++)
  // {
  //   int counter = (n/2)+1;
  //   int max = (n/2)+1;
  //   int min = i;
  //   for (int j = 1; j <= n/2; j++)
  //   {
  //     cout << counter;
  //     if (counter > min) counter--;
  //   }
  //   counter++;
  //   cout << "|" << counter << "|";
  //   for (int j = 1; j <= n/2; j++)
  //   {
  //     cout << counter;
  //     if (counter < max) counter++;
  //   }
  //   cout << endl;
  // }
}

int main()
{
  int n; cin >> n;
  print_numbers(n);
  return 0;
}