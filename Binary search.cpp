#include <iostream>
using namespace std;

int main()
{
  int n, i, x, low, high, mid, array[20];
  cout << "Enter number of elements: ";
  cin >> n;
  cout << "Enter elements of array: ";
  for(i = 0; i < n; i++)
    cin >> array[i];
  cout << "Enter element to be searched: ";
  cin >> x;
  low=0;
  high = n-1;
  mid = (low+high)/2;
  while(low<=high)
  {
      if(array[mid]<x)
        low=mid+1;
      else if(array[mid]==x)
      {
          cout << "Element found at index: " << mid;
          break;
      }
      else
        high = mid-1;
      mid = (low+high)/2;
  }
}
