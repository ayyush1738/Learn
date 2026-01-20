#include<bits/stdc++.h>
using namespace std;

int longestCons(vector<int>& arr, int n)
{
    int longest = 1;

    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }

    for(auto it : st)
    {
        int cnt = 1;
        int x = it;
        while(st.find(it+1)!=st.end())
        {
            x=x+1;
            cnt = cnt + 1;
        }

        longest = max(longest, cnt);
    }

    return longest;
}

int main()
{
    return 0;
}