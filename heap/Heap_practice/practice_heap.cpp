#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v)
{
    int curr = v.size() - 1;

    while (curr != 0)
    {
        int parent = (curr - 1) / 2;
        cout << curr << endl;
        if (v[curr] > v[parent])
        {
            swap(v[parent], v[curr]);
        }

        else
            break;
        curr = parent;
    }
}

void delete_heap(vector<int> &v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();

    int cur = 0;

    while (true)
    {
        int left = (cur * 2) + 1;
        int right = (cur * 2) + 2;
        int last = v.size() - 1;
        if (left <= last && right <= last)
        {
            if (v[left] >= v[right] && v[left] > v[cur])
            {
                swap(v[left], v[cur]);
                cur = left;
            }
            else if (v[right] >= v[left] && v[left] > v[cur])
            {
                swap(v[right], v[cur]);
                cur = right;
            }

            else
            {
                break;
            }
        }
        else if (left <= last)
        {
            if (v[left] > v[cur])
            {
                swap(v[left], v[cur]);
                cur = left;
            }
            else
            {
                break;
            }
        }
        else if (right <= last)
        {
            if (v[right] > v[cur])
            {
                swap(v[right], v[cur]);
                cur = right;
            }
            else
            {
                break;
            }
        }
        else
            break;
    }
}
int main()
{
    vector<int> v = {30, 20, 25, 15, 5, 6, 8};

    // int x;
    // cin >> x;
    // v.push_back(x);
    // insert_heap(v);
    delete_heap(v);

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}