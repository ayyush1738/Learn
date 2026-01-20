#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct trains {
    int start;
    int dep;
};

bool cmp(const trains& a, const trains& b)
{
    return a.dep < b.dep;
}

class Solution {
public:
    int findmin(vector<int> arr, vector<int> dep, int n)
    {
        trains a[n];

        for(int i = 0; i < n; i++)
        {
            a[i].start = arr[i];
            a[i].dep = dep[i];
        }

        sort(a, a + n, cmp);

        int count = 1;
        int lastend = a[0].dep;

        for(int i = 1; i < n; i++)
        {
            if(a[i].start >= lastend)
            {
                count++;
                lastend = a[i].dep;
            }
        }

        return count;
    }
};

int main()
{
    return 0;
}
