#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {

        int n;
        cin >> n;

        vector<int> v;

        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            v.push_back(val);
        }

        unordered_set<int> uniqueSet(v.begin(), v.end());
        vector<int> uniqueArr(uniqueSet.begin(), uniqueSet.end());
        sort(uniqueArr.begin(), uniqueArr.end(), greater<int>());
        for (int i : uniqueArr)
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}