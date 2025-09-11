#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

pair<int,int> global_extrema(vector<vector<int>>& matrix)
{
  int m = matrix.size();
  int n = matrix[0].size();

  int global_max = INT_MIN;
  int global_min = INT_MAX;

  for (int i = 0; i < m; i++)
  {
    global_min = min(global_min, matrix[i][0]);
    global_max = max(global_max, matrix[i][n-1]);
  }
  return {global_min, global_max};
}

int count_less_equal(vector<int>& v, int target)
{
  int p = 0;
  int q = v.size() - 1;

  while (p <= q)
  {
    int mid = (p+q)/2;
    if (v[mid] <= target)
    {
      p = mid + 1;
    }
    else
    {
      q = mid - 1;
    }
  }
  return p;
}

int median(vector<vector<int>>& matrix)
{
  int m = matrix.size();
  int n= matrix[0].size();
  pair<int, int> extrema = global_extrema(matrix);

  int p = extrema.first;
  int q = extrema.second;
  int candidate = (m * n + 1)/2;

  while (p < q)
  {
    int mid = (p+q)/2;
    int count = 0;

    for (int i = 0; i < m; i++)
    {
      count += count_less_equal(matrix[i], mid);
    }

    if (count < candidate)
    {
      p = mid + 1;
    }
    else
    {
      q = mid;
    }
  }
  return p;
}

int main()
{
  vector<vector<int>> matrix = {{1, 3, 5}, 
                                {2, 6, 9}, 
                                {3, 6, 9}};
  int _ = median(matrix);
  cout << _ << endl;
  return 0;
}