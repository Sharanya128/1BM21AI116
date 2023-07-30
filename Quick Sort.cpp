#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high, int pivot)
{
    int PIndex =low;
    for(int i=low;i<=high;i++)
    {
        if(a[i]<=pivot)
        {
            swap(a[PIndex],a[i]);
            PIndex++;
        }
    }
    PIndex--;
    return PIndex;
}
void quickSort(int a[], int low, int high)
{
    if(low<high)
    {
        int pivot = a[high];
        int PIndex = partition(a,low,high,pivot);
        quickSort(a, low, PIndex-1);
        quickSort(a, PIndex+1, high);
    }
}
int main()
{
    int a[50],n,i;
    cout<<"Enter no of ele: ";
    cin >> n;
    cout<<"Enter elements of array: ";
    for(i=0;i<n;i++)
        cin >> a[i];
    quickSort(a,0,n-1);
    cout<<"Sorted array: ";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
