#include <iostream>
using namespace std;

int inf[1001][1001];
void pre()
{
    for (int i = 1; i <= 1000; i++)
    {
        inf[i][1] = i * (i + 1) / 2;
        for (int j = 2; j <= 1000; j++)
        {
            inf[i][j] = inf[i][j - 1] + j - 1 + i - 1;
        }
    }
}
void solve()
{
    int x1, x2, y1, y2, value;
    cin >> x1 >> y1 >> x2 >> y2;
    int sum = 0, i;
    for (i = x1; i <= x2; i++)
    {
        sum += inf[i][y1];
    }
    for (i = y1 + 1; i <= y2; i++)
    {
        sum += inf[x2][i];
    }
    cout << sum << endl;
}
int main()
{
    pre();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // your code goes here
    return 0;
}
