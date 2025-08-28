#include <iostream>
#include <vector>

using namespace std;

vector<int> avg_rows(vector<vector<int>> A, int m, int n)
{
  vector<int> avgs;
  for (vector<int> AA : A)
  {
    int sum = 0;
    for (int x : AA)
    {
      sum += x;
    }
    int avg = sum / n;
    avgs.push_back(avg);
  }
  return avgs;
}

void print_vector(vector<int> A)
{
  for (int x : A) cout << x << endl;
}


int main()
{
  int m; cin >> m;
  int n; cin >> n;
  int r; cin >> r;

  vector<vector<int>> A;
  for (int i = 0; i < m; i++)
  {
    vector<int> AA;
    for (int j = 0; j < n; j++)
    {
      int x; cin >> x;
      AA.push_back(x);
    }
    A.push_back(AA);
  }
  vector<int> avgs = avg_rows(A, m, n);
  print_vector(avgs);
  return 0;
}