#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
vector<vector<int>> allPermutations;

void findPermutations(vector<int> &seq)
{
    sort(seq.begin(), seq.end());
    do
    {
        allPermutations.push_back(seq);
    } while (next_permutation(seq.begin(), seq.end()));
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> seq;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            seq.push_back(i);
        }
    }
    findPermutations(seq);

    int midIndex = (allPermutations.size() + 1) / 2 - 1;

    for (int num : allPermutations[midIndex])
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}