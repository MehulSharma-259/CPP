#include <bits/stdc++.h>
using namespace std;
int count(int n, int m, int **ar, int a, int b)
{
    int sum1 = 0, sum2 = 0, k;
    for (k = 0; k < n; k++)
    {
        sum1 += (*ar)[a][k];
    }
    for (k = 0; k < m; k++)
    {
        sum2 += (*ar)[k][b];
    }
    int total = sum1 + sum2 - 1;
    return total;
}
int main()
{
    int n, m, i, j, total = 0;
    int sum1 = 0, sum2 = 0;
    cin >> n;
    cin >> m;
    int ar[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> ar[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (ar[i][j] == 1)
            {
                total = count(n, m, ar, i, j);
            }
        }
    }
    if (total == 1)
        cout << total;
    return 0;
}