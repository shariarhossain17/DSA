#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    priority_queue<int> original_pq(A.begin(), A.end());

    int Q;
    cin >> Q;

    priority_queue<int, vector<int>, greater<int>> deleted_pq;

    while (Q--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            int X;
            cin >> X;
            original_pq.push(X);
        }
        else if (command == 1)
        {
            if (!original_pq.empty() && !deleted_pq.empty() && deleted_pq.top() == original_pq.top())
            {
                while (!deleted_pq.empty() && deleted_pq.top() == original_pq.top())
                {
                    deleted_pq.pop();
                }
            }
            if (!original_pq.empty())
            {
                cout << original_pq.top() << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (command == 2)
        {
            if (!original_pq.empty())
            {
                deleted_pq.push(original_pq.top());
                original_pq.pop();
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}