#include <iostream>
#include <vector>
using namespace std;

// method of: O(n^2)
// long long takes: 16 byte of data , twice as long type
long long maxPairWiseProduct(const vector<int> &numbers)
{
    long long result = 0;
    int n = numbers.size();
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (numbers[i] * numbers[j] > result)
            {
                result = ((long long)numbers[i]) * numbers[j];
            }
        }
    }
    return result;
}

// method of: O(n)
long long maxPairWiseProductFast(const vector<int> &numbers)
{
    int n = numbers.size();

    // Largest Index
    int max_index1 = -1;
    for (int i = 0; i < n; ++i)
    {
        if ((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
        {
            max_index1 = i;
        }
    }

    // Second Largest Index
    int max_index2 = -1;
    for (int j = 0; j < n; ++j)
    {
        if ((j != max_index1) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
        {
            max_index2 = j;
        }
    }
    return (long long)numbers[max_index1] * numbers[max_index2];
}

// Main function
int main()
{

    // Declare variables: n, vector
    //  take input
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }

    // call the function and print result
    // long long result = maxPairWiseProduct(numbers);
    long long result = maxPairWiseProductFast(numbers);
    cout << result << endl;

    return 0;
}