#include <iostream>
#include <vector>
#include <deque>

using namespace std;

void rotate(vector<int>& nums, int k) 
{
  deque<int> d(nums.begin(), nums.end());
  for(int i = 0; i < k; i++)
  {
    int temp = d.back();
    d.pop_back();
    d.push_front(temp);
  }
  nums = vector<int>(d.begin(), d.end()); 
}

int main()
{
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
  rotate(v, 3);
  for (auto i : v) cout << i << " ";
}