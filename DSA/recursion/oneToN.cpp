#include<bits/stdc++.h>
using namespace std;

void oneTon(int n)
{
    if(n==0)
    {
        return;
    }

    cout<<n<<" ";
    oneTon(n-1);
    cout<<n<<" ";
}

int main()
{
    oneTon(7);
    return 0;
}