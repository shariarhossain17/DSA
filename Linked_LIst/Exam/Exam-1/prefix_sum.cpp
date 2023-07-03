#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;

    long long int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    long long int prefix_sum[n];
    prefix_sum[0] = ar[0];

    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = ar[i] + prefix_sum[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << prefix_sum[i] << " ";
    }
    return 0;
}