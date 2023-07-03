#include <iostream>
using namespace std;

int main()
{
  int n, i, x, array[20];
  cout << "Enter number of elements in array: ";
  cin >> n;
  cout << "Enter elements of array: ";
  for (i = 0; i < n; i++)
  {
        cin >> array[i];
  }
  cout << "Element to be searched: ";
  cin >> x;
  for (i = 0; i < n; i++)
  {
     if(array[i]==x)
     {
         break;
     }
  }
  if(i<n)
  {
      cout << "Element found at index: " << i;
  }
  else
  {
      cout << "Element not found";
  }
}
