#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

long long findMaxPairWiseProduct(const vector<int> &numbers)
{
    // Create a vairable and intialize
    long long maxProduct = 0;
    // Create 2 for loops and find max value and return value
    for (int i = 0; i < numbers.size(); ++i)
    {

        for (int j = i + 1; j < numbers.size(); ++j)
        {
            maxProduct = max(maxProduct, ((long long)numbers[i]) * numbers[j]);
        }
    }
    return maxProduct;
}
int main()
{

    //Stress Test
    // Infinite While Loop
    while (true)
    {
        // Create random value of n
        int randomIndex = rand() % 10 + 2;
        cout << "Generatd Index: " << randomIndex << endl;
        // Create values and insert according to n
        vector<int> generatedNumbers(randomIndex);
        cout << "Generated Inputs: ";
        for (int i = 0; i < randomIndex; i++)
        {
            generatedNumbers[i] = rand() % 100;
            cout << generatedNumbers[i] << " ";
        }
        long long generatedMaxProduct = findMaxPairWiseProduct(generatedNumbers);
        cout << "\n"
             << "Max Pairwise Product: " << generatedMaxProduct << endl;
    }

    // Call the actual method
    int n = 0;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    // Call the method
    long long maxProduct = findMaxPairWiseProduct(numbers);
    cout << maxProduct << endl;
}