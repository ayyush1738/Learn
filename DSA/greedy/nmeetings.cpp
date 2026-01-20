#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Data {
    int start;
    int end;
    int pos;
};

// comparator: sort by end time
bool cmp(Data a, Data b)
{
    return a.end < b.end;
}

class Solution {
public:
    int nMeetings(vector<int> start, vector<int> end, int n)
    {
        Data arr[n];

        for(int i = 0; i < n; i++)
        {
            arr[i].start = start[i];
            arr[i].end = end[i];
            arr[i].pos = i + 1;
        }

        sort(arr, arr + n, cmp);

        int count = 1;
        int lastEnd = arr[0].end;

        for(int i = 1; i < n; i++)
        {
            if(arr[i].start > lastEnd)
            {
                count++;
                lastEnd = arr[i].end;
            }
        }

        return count;
    }
};

int main()
{
    return 0;
}
