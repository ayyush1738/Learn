#include<bits/stdc++.h>
using namespace std;

int sec_lar(vector<int> arr, int n)
{
    int lar = INT_MIN;
    int secLar = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>lar)
        {
            secLar = lar;
            lar = arr[i];
        }
        if(arr[i]!=lar && arr[i]>secLar)
        {
            secLar = arr[i];
        }
    }

    return secLar;
}

int main()
{
    return 0;
}