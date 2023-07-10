#include <iostream>
using namespace std;

int main()
{
    int a[10], n, i, j, pos, swap;
    cout << "Enter number of elements in array: ";
    cin >> n;
    cout << "Enter elements of array: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(i = 0; i < n - 1; i++)
    {
        pos=i;
        for(j = i + 1; j < n; j++)
        {
            if(a[pos] > a[j])
            {
                pos=j;
            }
        }
        if(pos != i)
        {
            swap=a[i];
            a[i]=a[pos];
            a[pos]=swap;
        }
    }
    cout << "Sorted array: ";
    for (i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}
