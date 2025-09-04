#include <iostream>
#include <vector>

using namespace std;

vector<int> matrix_sum(vector<vector<int>> matrix, int m, int n)
{
  vector<int> sums;
  for (int i = 0; i < m; i++)
  {
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
      sum += matrix[i][j];
    }
    sums.push_back(sum);
  }
  return sums;
}

void print_vector(vector<int> v)
{
  for (int x : v) cout << x << endl;
}

int main()
{
  int m; cin >> m;
  int n; cin >> n;

  vector<vector<int>> matrix;
  for (int i = 0; i < m; i++)
  {
    vector<int> v;
    for (int j = 0; j < n; j++)
    {
      int x; cin >> x;
      v.push_back(x);
    }
    matrix.push_back(v);
  }

  vector<int> sums = matrix_sum(matrix, m, n);
  print_vector(sums);
}