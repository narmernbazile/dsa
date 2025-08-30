#include <iostream>
#include <vector>

using namespace std;

void reverse_print(vector<int> A)
{
  for (int i = A.size()-1; i >= 0; i--) cout << A[i] << " ";
  cout << endl;
}

int main()
{
  int n; cin >> n;
  vector<int> nums;
  for (int i  = 0; i < n; i++)
  {
    int x; cin >> x;
    nums.push_back(x);
  }
  reverse_print(nums);
  return 0;
}