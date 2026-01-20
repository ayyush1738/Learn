#include<bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(vector<int> arr, int n)
{
    int i = 0;
    for(int j=1;j<n;j++)
    {
        if(nums[i]!=nums[j])
        {
            i++;

            nums[i]=nums[j];
        }
    }

    return vector<int>(arr.begin(), arr.begin() + i + 1);
}
int main()
{
    return 0;
}