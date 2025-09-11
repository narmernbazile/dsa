#include <iostream>
#include <vector>

using namespace std;

bool search_matrix(vector<vector<int>>& matrix, int target)
{
  int m = matrix.size();
  int n = matrix[0].size();

  int i = 0;
  int j = n - 1;

  while (i >= 0 && i < m && j >= 0 && j < n)
  {
    if (matrix[i][j] == target) return true;

    if (target < matrix[i][j])
    {
      j--;
      continue;
    }

    if (target > matrix[i][j])
    {
      i++;
      continue;
    }
  }
  return false;
}

int main()
{
  vector<vector<int>> matrix = {{1,4,7,11,15},
                                {2,5,8,12,19},
                                {3,6,9,16,22},
                                {10,13,14,17,24},
                                {18,21,23,26,30}};
  int target = 5;
  bool _ = search_matrix(matrix, target);
  cout << _ << endl;
}