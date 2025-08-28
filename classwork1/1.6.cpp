#include <iostream>
#include <vector>

using namespace std;

int diagonal_sum(vector<vector<int>> matrix, int n)
{
  int i = 0;
  int j = 0;
  int sum = 0;
  while (i < n && j < n)
  {
    sum += matrix[i][j];
    i++;
    j++;
  }
  return sum;
}

int main()
{
  int n; cin >> n;
  vector<vector<int>> a;
  for (int i = 0; i < n; i++)
  {
    vector<int> aa;
    for (int j = 0; j < n; j++)
    {
      int x; cin >> x;
      aa.push_back(x);
    }
    a.push_back(aa);
  }
  int sum = diagonal_sum(a, n);
  cout << sum;
}