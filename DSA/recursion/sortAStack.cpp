#include <bits/stdc++.h>
using namespace std;

void insertSorted(stack<int>& st, int temp)
{
    // base condition
    if (st.empty() || st.top() <= temp)
    {
        st.push(temp);
        return;
    }

    int val = st.top();
    st.pop();

    insertSorted(st, temp);

    st.push(val);
}

void sortStack(stack<int>& st)
{
    if (st.empty())
        return;

    int temp = st.top();
    st.pop();

    sortStack(st);

    insertSorted(st, temp);
}

int main()
{
    stack<int> st;
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(2);

    sortStack(st);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
