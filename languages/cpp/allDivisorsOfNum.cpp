#include<iostream>
#include<vector.h>
using namespace std;

vector<int> allDivisors(int n)
{
    vector<int> ans;
    for(int i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            ans.push_back(i);
        }
    }

    return ans;
}

//i=1
//n=6
//6%1==0
//[1]
//1!=6
//[1, 6]
//i=2
//6%2==0
//[1, 2]
//i=3
//6%3==0
//[1, 2, 3]
//i=4

vector<int> optmizedDivisors(int n)
{
    vector<int> ans;
    int k = sqrt(n);
    for(int i=1;i<=k;i++)
    {
        if(n%i == 0)
        {
            ans.push_back(i);
        }

        if(i!=n%i)
        {
            ans.push_back(n/i);
        }
    }
}

int main()
{
    return 0;
}