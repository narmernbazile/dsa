#include <iostream>
#include <vector>

using namespace std;

void replace_matrix(vector<vector<int>>& A, int m, int n, int target, int replacement)
{
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (A[i][j] == target) A[i][j] = replacement;
    }
  }
}

void print_matrix(vector<vector<int>> A)
{
  for (vector<int> a : A)
  {
    for (int x : a)
    {
      cout << x << " ";
    }
    cout << endl;
  }
}

int main()
{
  int m; cin >> m;
  int n; cin >> n;

  vector<vector<int>> a;
  for (int i = 0; i < m; i++)
  {
    vector<int> aa;
    for (int j = 0; j < n; j++)
    {
      int x; cin >> x;
      aa.push_back(x);
    }
    a.push_back(aa);
  }
  int t; cin >> t;
  int r; cin >> r;
  replace_matrix(a, m, n, t, r);
  print_matrix(a);
}