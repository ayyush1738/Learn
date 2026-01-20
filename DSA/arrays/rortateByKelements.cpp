#include<bits/stdc++.h>
using namespace std;

vector<int> rotate(vector<int> arr, int n, int k)
{
    reverse(arr, 0, n-k-1);
    reverse(arr, n-k, n-1);
    reverse(arr, 0, n-1);

    return arr;
}

int main()
{
    return 0;
}