#include<bits/stdc++.h>
using namespace std;

vector<int> sortArrayofZeroAndOne(vector<int>& arr, int n)
{
    int low = 0, mid = 0, int high=n-1;

    for(int i=0;i<n;i++)
    {
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }else if(arr[mid==1])
        {
            mid++;
        }else{
            high--;
        }
    }
} 

int main()
{
    return 0;
}