#include<bits/stdc++.h>
using namespace std;

int coins(vector<int>& coins, int v)
{
    sort(coins.begin(), coins.end());

    int i = coins.size() - 1;
    int cnt = 0;

    while (i >= 0 && v > 0)
    {
        if (coins[i] <= v)
        {
            v -= coins[i];
            cnt++;
        }
        else
        {
            i--;
        }
    }

    return (v == 0) ? cnt : -1;
}


int main()
{
    return 0;
}