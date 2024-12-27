class Solution
{
public:
    long long minCost(int n, vector<int> &a, vector<int> &b)
    {
        // code here
        map<int, int> countA, countB;
        for (int i = 0; i < n; i++)
        {
            countA[a[i]]++;
            countB[b[i]]++;
        }

        if (countA != countB)
        {
            return -1;
        }

        int cost = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                int j = 0;
                while (b[j] != a[i])
                {
                    j++;
                }
                cost += min(a[i], b[j]);
                swap(b[j], b[i]);
            }
        }

        return cost;
    }
};