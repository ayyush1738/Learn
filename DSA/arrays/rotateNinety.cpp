#include<bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<int> mat)
{
    int n=mat.size();

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            swap(mat[i][j], mat[j][i]);
        }
    }

    for(int i=0;i<n;i++)
    {
        reverse(mat[i].begin(), mat[i].end());
    }
}

int main()
{
    return 0;
}