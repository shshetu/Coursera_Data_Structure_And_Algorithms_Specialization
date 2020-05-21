#include <iostream>
using namespace std;

int countWorstFib = 0;
int countBetterFib = 0;

int findFibWorstAlgoUsingRecursion(int n){
cout<<"Step: "<<countWorstFib++<<endl;
// Base case:
if(n<=1)
return n;
// Recursive case:
else
return findFibWorstAlgoUsingRecursion(n-1)+findFibWorstAlgoUsingRecursion(n-2);

}

int findBetterFib(int n){

}

int main(){
    int n;
    cin>>n;

    int result = findFibWorstAlgoUsingRecursion(n);
    // Call worst Algo
    cout<<"Fibo number position: "<<n<<"th, using worst Algo is: "<<result<<endl;
}