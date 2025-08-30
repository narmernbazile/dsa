#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;

void bubble_sort_desc(vector<int>& A) {
  int n = A.size();
  for (int i = 0; i < n-1; i++)
  {
    for (int j = A.size()-1; j >= 1; j--)
    {
      if (A[j] > A[j-1]) swap(A[j], A[j-1]);
    }
  }
}

int find_largest(vector<int>& A)
{
  int n = A.size();
  int idx = A[0];
  for (int i = 0; i < n; i++)
  {
    if (A[i] > A[idx])
    {
      idx = i;
    }
  }
  return idx;
}

void selection_sort_desc(vector<int>& A) {
  int n = A.size();
  for (int i = i; i < n; i++)
  {
    int k = find_largest(A);
    swap(A[i], A[k]);
  }
  
}
void insertion_sort(vector<int>& A) {
  int n = A.size();
  for (int k = 1; k <= n-1; k++)
  {
    // invariant: A[0] < A[1] < A[2] < ... A[k-1]
    int key = A[k];
    int i = k - 1;
    while (i >= 0 && key < A[i])
    {
      A[i+1] = A[i];
      i--;
    }
    A[i+1] = key;
  } 
}

void insertion_sort_desc(vector<int>& A) {
  int n = A.size();
  for (int k = 1; k <= n-1; k++)
  {
    int key = A[k];
    int i = k - 1;
    while (i >= 0 && key > A[i])
    {
      A[i+1] = A[i];
      i--;
    }
    A[i+1] = key;
  } 
}

void merge(vector<int>& A, int p, int m, int q) {
  int n = A.size();
  int n1 = m - p + 1;
  int n2 = q - m;
  vector<int> L;
  vector<int> R;
}

void merge_sort(vector<int>& A, int p, int q) {
  int n = A.size();
  if (n == 1) return; 
  if (p >= q) return;

  int mid = floor((p+q)/2);
  merge_sort(A, p, mid);
  merge_sort(A, mid + 1, q);
  merge(A, p, mid, q);

}

void partition(vector<int>& A, int p, int q, int& r) {
  
}

void quick_sort(vector<int>& A, int p, int q) {
  
}

int main() {
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  vector<int> v1 = {2, 5, 1, 8, 7, 5, 6, 6, 6, 5};
  vector<int> v2 = {10, 9, 4, 7, 8, 1, 10, 1, 8, 3};
  vector<int> v3 = {0, 6, 4, 8, 9, 9, 5, 5, 0, 8};
  vector<int> v4 = {3, 10, 2, 9, 0, 8, 10, 8, 0, 4};
  vector<int> v5 = {10, 6, 1, 7, 0, 9, 0, 10, 1, 6};

  merge_sort(v, 0, v.size()-1);
  for (auto x : v2) cout << x << " ";
  cout << endl;
  return 0;
}

