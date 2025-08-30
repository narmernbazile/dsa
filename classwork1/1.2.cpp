#include <iostream>
#include <vector>

using namespace std;

int largest(vector<int> A, int n)
{
  int max = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (A[i] > max) max = A[i];
  }
  return max;
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
  int max = largest(A, n);
  cout << max;
}