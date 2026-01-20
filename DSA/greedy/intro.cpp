#include<bits/stdc++.h>
using namespace std;

void greedy(vector<int> a, int n)
{
    for(int i=0;i<n;i++)
    {
        x = select(a);
        if feasible(x)
        {
            solution += x;
        }
    }
}

int main()
{
    return 0;
}