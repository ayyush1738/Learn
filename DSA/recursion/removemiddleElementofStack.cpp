#include<bitrs/stdc++.h>
using namespace std;

void solve(stack<int> st, int k)
{
    if(k==1)
    {
        st.pop();
        return;
    }

    int temp=st.top();
    st.pop();
    solve(st, k-1);
    st.push(temp);
}

stack<int> middleDel(stack<int> st, int size)
{
    if(size==0)
    {
        return s;
    }

    int k = (size/2)+1;
    solve(s, k);
}

int main()
{
    return 0;
}