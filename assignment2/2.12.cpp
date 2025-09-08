#include <iostream>
#include <vector>

using namespace std;

void reverse(vector<vector<int>>& matrix)
{
  int m = matrix.size();
  int n = matrix[0].size();
  for (int i = 0; i < m; i++)
  {
    int p = 0;
    int q = m - 1;

    while(p < q)
    {
      swap(matrix[i][p], matrix[i][q]);
      p++;
      q--;
    }
  }
}

void transpose(vector<vector<int>>& matrix)
{
  int m = matrix.size();
  int n = matrix[0].size();
  for (int i = 0; i < m; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      swap(matrix[i][j], matrix[j][i]);
    }
  }
}

void rotate(vector<vector<int>>& matrix)
{
  transpose(matrix);
  reverse(matrix);
}

int main()
{
  vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  rotate(matrix);
  for (vector<int> i : matrix)
  {
    for (int j : i)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}