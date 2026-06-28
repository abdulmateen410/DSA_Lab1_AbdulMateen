#include <iostream>
#include <string>
using namespace std;

// Naive Pattern Matching
int findPattern(const string& text, const string& pattern)
{
    if (pattern.empty())
        return 0;

    int n = text.length();
    int m = pattern.length();

    for (int i = 0; i <= n - m; i++)
    {
        int j;

        for (j = 0; j < m; j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }

        if (j == m)
            return i;
    }

    return -1;
}

int main()
{
    // Pattern at beginning
    cout << "Test Case 1: "
         << findPattern("Hello World", "Hello") << endl;

    // Pattern at end
    cout << "Test Case 2: "
         << findPattern("Hello World", "World") << endl;

    // Pattern not present
    cout << "Test Case 3: "
         << findPattern("Hello World", "ChatGPT") << endl;

    // Empty pattern
    cout << "Test Case 4: "
         << findPattern("Hello World", "") << endl;

    return 0;
}