#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++) // o(n)
    {
        cin >> ar[i];
    }

    int s = 0;

    for (int i = 0; i < n; i++) // o(n)
    {
        s += ar[i];
    }

    cout << s;
    return 0;
}