#include<bits/stdc++.h>
using namespace std;

void setMatrix(vector<vector<int>>& mat)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> markRow(n, 0);
    vector<int> markCol(m, 0);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j]==0)
            {
                markRow[i]=1;
                markCol[i]=1;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(markRow[0]==1 || markCol[0]==1)
            {
                matrix[i][j]=0;
            }
        }
    }
}

int main()
{
    return 0;
}