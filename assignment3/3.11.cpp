#include <iostream>
#include <vector>

using namespace std;

bool check_station(vector<int>& v, double d, int k)
{
  int n = v.size();
  int req = 0;
  for (int i = 1; i < n; i++)
  {
    int delta = v[i] - v[i-1];
    req += ceil(delta/d) - 1;
  }
  return req <= k; 
}

double min_max_dist(vector<int>& v, int k)
{
  int n = v.size();
  double p = 0.0; 
  double q = v[n-1] - v[0];

  while (q - p > 1e-6)
  {
    double mid = (p + q)/2.0;
    if (check_station(v, mid, k))  q = mid;
    else p = mid;
  }
  return round(q*100)/100;
}

int main()
{
  vector<int> v = {1, 2, 3, 4, 5};
  double _ = min_max_dist(v, 2);
  cout << _ << endl;
  return 0;
}