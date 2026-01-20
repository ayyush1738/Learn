#include<bits/stdc++.h>
using namespace std;

int nextPerm(vector<int> arr, int n)
{
    int index = -1;
    for(int i=arr.size()-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
        {
            index=i;
            break;
        }
    }

    if(index==-1)
    {
        reverse(arr.begin(), arr.end());
        return;
    }

    for(int i=arr.size()-1;i>index;i++)
    {
        if(arr[index]<arr[i])
        {
            swap(arr[index], arr[i]);
            break;
        }
    }

    reverse(arr.begin()+index+1, arr.end());
}

int main()
{
    return 0;
}