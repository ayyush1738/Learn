#include<bits/stdc++.h>
using namespace std;

void solve(int ones, int zeros, string op, int n)
{
    if(n==0)
    {
        cout<<op<<endl;
        return;
    }

    string op1 = op;
    op1.push_back('1');

    solve(ones+1, zeros, op1, n-1);
    if(ones>zeros)
    {
        string op2 = op;
        op2.push_back('0');
        solve(ones, zeros+1, op2, n-1);
    }
}

int main()
{
    int n;
    cin>>n;
    int ones = 0;
    int zeros = 0;
    solve(ones, zeros, "", n);
    return 0;
}