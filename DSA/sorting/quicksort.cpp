#include<bits/stdc++.h>
using namespace std;

void quickSort(vector<int> arr, int low, int mid, int high)
{
    if(low<high)
    {
        int pivot = pivotIndex(arr, low, high);
        quickSort(arr, low, pivotIndex-1);
        quickSort(arr, pivotIndex+1, high);
    }
}

int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(true)
    {
        if(arr[i]<pivot && i<=high)
        {
            i++;
        }

        if(arr[j]>pivot && j>=low)
        {
            j--;
        }

        if(i>=j)
        {
            return j;
        }

        swap(arr[i], arr[j]);
        i++;j--;
    }
}