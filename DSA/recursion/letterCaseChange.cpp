#include <bits/stdc++.h>
using namespace std;

void solve(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << endl;
        return;
    }

    char ch = ip[0];
    ip.erase(ip.begin());

    if (isalpha(ch))
    {
        solve(ip, op + (char)tolower(ch));
        solve(ip, op + (char)toupper(ch));
    }
    else
    {
        solve(ip, op + ch);  // digit → no branching
    }
}

int main()
{
    string ip;
    cin >> ip;
    solve(ip, "");
    return 0;
}
