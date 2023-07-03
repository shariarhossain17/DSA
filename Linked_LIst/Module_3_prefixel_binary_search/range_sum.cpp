#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        int sum = 0;

        for (int i = l; i <= r; i++)
        {
            sum += ar[i];
        }

        cout << sum << endl;
    }

    return 0;
}