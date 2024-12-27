/**
 *--------------------><----------------------
 *     अनेकवक्त्रनयनमनेकाद्भुतदर्शनम्   |
 *   अनेकदिव्याभरणं दिव्यानेकोद्यतायुधम् || BG.10.10 ||
 *     दिव्यमाल्याम्बरधरं दिव्यगन्धानुलेपनम् |
 *   सर्वाश्चर्यमयं देवमनन्तं विश्वतोमुखम्   || BG.10.11 ||
 *--------------------><----------------------
}
**/
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    vector<int> freq;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        mp[tmp]++;
    }
    // int cnt = (n * (n - 1)) / 2;
    for (auto i : mp)
    {
        freq.push_back(i.second);
    }
    sort(freq.rbegin(), freq.rend());
    for (int i = 0; i < freq.size() && k > 0; i++)
    {
        if (freq[i] > 1)
        {
            int maxi = min(k, n - freq[i]);
            freq[i] += maxi;
            k -= maxi;
        }
    }
    int ans = 0;
    for (int i = 0; i < freq.size(); i++)
    {
        ans += (freq[i] * (freq[i] - 1)) / 2;
    }
    cout << ans << endl;
}
int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}