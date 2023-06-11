#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int mid = (n / 2) + 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == mid)
            {
                if (j == mid)
                {
                    cout << "X";
                }
                else
                {
                    cout << " ";
                }
            }
            else if (i == j)
            {
                cout << "\\";
            }
            else if (j <= (n + 1 - i))
            {
                if (j == (n + 1 - i))
                    printf("/");
                else
                    printf(" ");
            }

            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    return 0;
}