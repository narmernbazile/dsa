#include <iostream>
#include <vector>

using namespace std;

int sum_even(vector<int> A, int n)
{
  int sum = 0;
  for (int i = 0; i < n; i+=2) sum += A[i];
  return sum;
}

int main()
{
  int n; cin >> n;
  vector<int> nums;
  for (int i = 0; i < n; i++)
  {
    int x; cin >> x;
    nums.push_back(x);
  }
  int sum = sum_even(nums, n);
  cout << sum;
}