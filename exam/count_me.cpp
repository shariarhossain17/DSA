#include <bits/stdc++.h>
using namespace std;

pair<string, int> findMostOccurredWord(const string &s)
{
    map<string, int> wordCount;
    istringstream iss(s);
    string word;
    int maxCount = 0;
    string mostOccurredWord;

    while (iss >> word)
    {
        wordCount[word]++;
        if (wordCount[word] > maxCount)
        {
            maxCount = wordCount[word];
            mostOccurredWord = word;
        }
    }

    return make_pair(mostOccurredWord, maxCount);
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 1; i <= t; i++)
    {
        string s;

        getline(cin, s);
        pair<string, int> result = findMostOccurredWord(s);

        cout << result.first << " " << result.second << endl;
    }
    return 0;
}