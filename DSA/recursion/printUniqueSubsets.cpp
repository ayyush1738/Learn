#include <bits/stdc++.h>
using namespace std;

set<string> s;

void solve(string ip, string op)
{
    if (ip.length() == 0)
    {
        s.insert(op);
        return;
    }

    // Exclude
    solve(ip.substr(1), op);

    // Include
    solve(ip.substr(1), op + ip[0]);
}

int main()
{
    string ip;
    cin >> ip;

    solve(ip, "");

    for (auto &x : s)
        cout << x << endl;

    return 0;
}
