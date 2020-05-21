#include <iostream>
using namespace std;
int count = 0;
int findGCD(int a,int b){

// Base case:
if(b == 0)
return a;
count++;
cout<<"Number of times it looped: "<<count<<endl;
// Recursive case:
// a takes the value of b
int r = a%b;
a = b;
// b takes the value of remainder
b = r;
// call the function
return findGCD(a,b);
}
int main(){
int a = 357;
int b = 234;
int gcd = 0;
if(b>a){
   findGCD(b,a);
}
gcd = findGCD(a,b);
cout<<"GCD of: "<<a<<" and "<<b<<" is: "<<gcd<<endl;
}