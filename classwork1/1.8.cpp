#include <iostream>
#include <vector>

using namespace std;

int count_occur(vector<int> A, int target)
{
  int count = 0;
  for (int x : A) if (x == target) count++;
  return count;
}

int main()
{
  int n; cin >> n;
  vector<int> A;
  for (int i = 0; i < n; i++)
  {
    int x; cin >> x;
    A.push_back(x);
  }
  int t; cin >> t;
  int c = count_occur(A, t);
  cout << c << endl;
}