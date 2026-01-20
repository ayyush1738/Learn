#include <bits/stdc++.h>
using namespace std;

vector<int> leader(vector<int> arr, int n)
{
    int maxi = arr[n-1];
    vector<int> ans;
    ans.push_back(maxi);

    for (int i = n-2; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }

    // reverse the vector first
    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{
    return 0;
}
