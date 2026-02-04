#include <bits/stdc++.h>
using namespace std;

void solve(string &ip, int idx, string op)
{
    if (idx == ip.length())
    {
        cout << op << endl;
        return;
    }

    // Option 1: add space before character
    solve(ip, idx + 1, op + " " + ip[idx]);

    // Option 2: add character directly
    solve(ip, idx + 1, op + ip[idx]);
}

int main()
{
    string ip;
    cin >> ip;

    if (ip.length() == 0) return 0;

    string op;
    op.push_back(ip[0]);

    solve(ip, 1, op);
    return 0;
}
