#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;
bool vis[7][7];
int res[49];
int path = 0, steps = 0;
void solve(int r, int c)
{
    if (r == 6 && c == 0)
    {
        if (steps == 48)
        {
            path++;
        }
        return;
    }
    if (vis[r][c] ||
        ((c >= 1 && c <= 5 && !vis[r][c + 1] && !vis[r][c - 1]) && ((r == 0 && vis[r + 1][c]) || (r == 6 && vis[r - 1][c]))) || (r >= 1 && r <= 5 && !vis[r + 1][c] && !vis[r - 1][c]) && ((c == 0 && vis[r][c + 1]) || (c == 6 && vis[r][c - 1])) ||
        (r >= 1 && r <= 5 && c >= 1 && c <= 5 && vis[r + 1][c] && vis[r - 1][c] && !vis[r][c + 1] && !vis[r][c - 1]) ||
        (r >= 1 && r <= 5 && c >= 1 && c <= 5 && vis[r][c + 1] && vis[r][c - 1] && !vis[r + 1][c] && !vis[r - 1][c]))
    {
        return;
    }
    
    vis[r][c] = true;
    if (res[steps] != -1)
    {
        switch (res[steps])
        {
        case 0:
            if (c > 0 && !vis[r][c - 1])
            {
                steps++;
                solve(r, c - 1); // left
                steps--;
            }
            break;
        case 1:
            if (r > 0 && !vis[r - 1][c])
            {
                steps++;
                solve(r - 1, c); // up
                steps--;
            }
            break;
        case 2:
            if (r < 6 && !vis[r + 1][c])
            {
                steps++;
                solve(r + 1, c); // down
                steps--;
            }
            break;
        case 3:
            if (c < 6 && !vis[r][c + 1])
            {
                steps++;
                solve(r, c + 1); // right
                steps--;
            }
            break;
        }
        vis[r][c] = false;
        return;
    }
    if (r < 6 && !vis[r + 1][c])
    {
        steps++;
        solve(r + 1, c); // down
        steps--;
    }
    if (r > 0 && !vis[r - 1][c])
    {
        steps++;
        solve(r - 1, c); // up
        steps--;
    }
    if (c < 6 && !vis[r][c + 1])
    {
        steps++;
        solve(r, c + 1); // right
        steps--;
    }
    if (c > 0 && !vis[r][c - 1])
    {
        steps++;
        solve(r, c - 1); // left
        steps--;
    }
    vis[r][c] = false;
}
int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case '?':
            res[i] = -1;
            break;
        case 'L':
            res[i] = 0;
            break;
        case 'U':
            res[i] = 1;
            break;
        case 'D':
            res[i] = 2;
            break;
        case 'R':
            res[i] = 3;
            break;
        }
    }
    solve(0, 0);
    cout << path << endl;
    return 0;
}