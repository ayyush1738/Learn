#include<bits/stdc++.h>
using namespace std;

int occurenceCount(vector<int> arr, int n, int k)
{
    int first = firstOccurrence(arr, n, k);
    if (first == -1) return 0;  
    int last = lastOccurrence(arr, n, k);
    return last - first + 1;
}

int main()
{
    return 0;
}