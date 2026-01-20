#include<bits/stdio.h>
using namespace std;

bool checkIthBit(int n, int i)
{
    if((n & (1<<i)))
    {
        return true;
    }

    return false;
}

int main()
{
    return 0;
}