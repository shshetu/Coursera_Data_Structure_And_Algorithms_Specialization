#include <iostream>
#include <vector>
#include <cstdlib>
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
    // Stress test

    // create an infinite for loop.
    // use a for loop to input number of input set using random
    // use a for loop to input elements in the vector
    // call two methods and store the results in two distinct vairable
    // if the results match then print ok
    // if does not match then print two results and break the loop.

    while (true)
    {
        int input = rand() % 10 + 2;
        cout<<"Input size: "<<input<<endl;
        vector<int> numbersForStressTest(input);
        cout<<"Values: "<<endl;
        for (int i = 0; i < numbersForStressTest.size(); i++)
        {
            numbersForStressTest[i] = rand() % 10000;
           cout << numbersForStressTest[i]<<" ";
        }

        long long quadraticComplexityResult = maxPairWiseProduct(numbersForStressTest);
        long long linearComplexityResult = maxPairWiseProductFast(numbersForStressTest);

        if(quadraticComplexityResult != linearComplexityResult){
                cout<<"quadraticComplexityResult: "<<quadraticComplexityResult<<" linearComplexityResult: "<<linearComplexityResult;
        break;
        }else
        {
            cout<<"OK"<<endl;
        }
            
    }

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
    long long result = maxPairWiseProduct(numbers);
    cout << result << endl;

    return 0;
}