#include <iostream>
#include <vector>

using namespace std;

vector<int> spiral_order(vector<vector<int>>& matrix)
{
  int m = matrix.size();
  int n = matrix[0].size();
  vector<int> result;

  int bottom = m - 1;
  int top = 0;
  int left = 0;
  int right = n - 1;

  while (top <= bottom && left <= right)
  {
    // left to right across top
    for (int i = left; i <= right; i++)
    {
      result.push_back(matrix[top][i]);
    }
    top++;

    // top to bottom along right
    for (int i = top; i <= bottom; i++)
    {
      result.push_back(matrix[i][right]);
    }
    right--;

    // right to left across bottom
    if (top <= bottom)
    {
      for (int i = right; i >= left; i--)
      {
        result.push_back(matrix[bottom][i]);
      }
      bottom--;
    }

    // bottom to top along left
    if (left <= right)
    {
      for (int i = bottom; i >= top; i--)
      {
        result.push_back(matrix[i][left]);
      }
      left++;
    }
  }
  return result;
}

int main()
{
  vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
  vector<int> result = spiral_order(matrix);
  for (auto x : result) cout << x << " ";
  cout << endl;
  return 0;
}