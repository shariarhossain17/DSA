#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q;
    cin >> n >> q;
    long long int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    long long int pre[n];
    pre[0] = ar[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = ar[i] + pre[i - 1];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        if (l == 0)
            cout << pre[r] << endl;
        else
            cout << pre[r] - pre[l - 1] << endl;
    }

    return 0;
}