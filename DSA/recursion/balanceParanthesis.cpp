#include <bits/stdc++.h>
using namespace std;

void balancedParanthesis(int open, int close, string op, vector<string> &v)
{
    if (open == 0 && close == 0)
    {
        v.push_back(op);
        return;
    }

    if (open > 0)
    {
        balancedParanthesis(open - 1, close, op + "(", v);
    }

    if (close > open)
    {
        balancedParanthesis(open, close - 1, op + ")", v);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<string> v;
    balancedParanthesis(n, n, "", v);

    for (auto &s : v)
        cout << s << endl;

    return 0;
}
