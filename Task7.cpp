#include <iostream>
#include <vector>
using namespace std;

// Function to find all indices of a key
vector<int> findIndices(const vector<int>& arr, int key)
{
    vector<int> indices;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
            indices.push_back(i);
        }
    }

    return indices;
}

// Function to display indices
void displayIndices(const vector<int>& indices)
{
    if (indices.empty())
    {
        cout << "Key not found." << endl;
        return;
    }

    cout << "Indices: ";
    for (int index : indices)
    {
        cout << index << " ";
    }
    cout << endl;
}

int main()
{
    // Test Case 1: Multiple occurrences
    vector<int> arr1 = {5, 2, 7, 2, 9, 2};
    cout << "Test Case 1" << endl;
    displayIndices(findIndices(arr1, 2));

    // Test Case 2: Key not present
    cout << "\nTest Case 2" << endl;
    displayIndices(findIndices(arr1, 10));

    // Test Case 3: Empty array
    vector<int> arr2;
    cout << "\nTest Case 3" << endl;
    displayIndices(findIndices(arr2, 5));

    return 0;
}