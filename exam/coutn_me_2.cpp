#include <bits/stdc++.h>
using namespace std;

pair<int, int> findMostOccurredWord(vector<int> &arr)
{
    map<int, int> valueCount;
    int maxCount = 0;
    int mostOccurredValue = arr[0];

    for (int num : arr)
    {
        valueCount[num]++;
        if (valueCount[num] > maxCount || (valueCount[num] == maxCount && num > mostOccurredValue))
        {
            maxCount = valueCount[num];
            mostOccurredValue = num;
        }
    }

    return make_pair(mostOccurredValue, maxCount);
}
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        pair<int, int> result = findMostOccurredWord(v);

        cout << result.first << " " << result.second << endl;
    }
    return 0;
}