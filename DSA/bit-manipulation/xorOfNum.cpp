#include<bits/stdc++.h>
using namespace std;

//N%4 = 1; ans = 1
//N%4 = 2; ans = N + 1
//N%4 = 3; ans = 0
//N%4 = 4; ans = N

int func(int& N)
{
    if(N%4==1)
    {
        return 1;
    }else if(N%4==2)
    {
        return N+1;
    }else if(N%4==3)
    {
        return 0;
    }else{
        return N;
    }

    return 0;
}

int main()
{
    int N;
    cin>>N;

    cout<<func(N-1) ^ func(N);
    return 0;
}