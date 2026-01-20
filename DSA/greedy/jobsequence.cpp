#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct jobs {
    int id;
    int deadline;
    int profit;
};

bool comp(jobs j1, jobs j2)
{
    return j1.profit > j2.profit;
}

class Solution {
public:
    vector<int> maxProfit(vector<int> id, vector<int> deadline, vector<int> profit, int n)
    {
        jobs arr[n];

        for(int i = 0; i < n; i++)
        {
            arr[i].id = id[i];
            arr[i].deadline = deadline[i];
            arr[i].profit = profit[i];
        }

        sort(arr, arr + n, comp);

        int maxDeadline = 0;
        for(int i = 0; i < n; i++)
        {
            maxDeadline = max(maxDeadline, arr[i].deadline);
        }

        vector<int> slot(maxDeadline + 1, -1);

        int cnt = 0, totalProfit = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = arr[i].deadline; j > 0; j--)
            {
                if(slot[j] == -1)
                {
                    slot[j] = arr[i].id;
                    cnt++;
                    totalProfit += arr[i].profit;
                    break;
                }
            }
        }

        return {cnt, totalProfit};
    }
};

int main()
{
    return 0;
}
