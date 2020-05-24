#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

string generatorFile = "generator.txt";
string outputSaverFile = "output.txt";
int generateIntput(){
srand(time(NULL));
return rand()%100;
}
void writeToGeneratorFile(){
    ofstream inFile(generatorFile,ofstream::in | ofstream::app);
    if(!inFile.is_open()){
        cout<<generatorFile+" is not open! ";
    }else
    {
        inFile<<generateIntput()<<endl;
    }
    
}
int readFromGeneratorFile(){
    int number;
    ifstream outFile(generatorFile);
    if(!outFile.is_open()){
        cout<<generatorFile+" is not open! ";
    }else
    {
        outFile>>number;
       cout<<"Generated number: "<<number<<endl;
    }
    return number;
}
void writeToOutputSaverFile(int number){
    int i =0;
    ofstream inFile(outputSaverFile ,ofstream::in | ofstream::app);
    inFile<<number<<endl;
    cout<<"\nOutput: "<<number;
}
void runProgram(){
    int number = generateIntput();
   cout<<"Enter your number: ";
    cout<< number;
    writeToOutputSaverFile(number*number); 
}

int main(){
    writeToGeneratorFile();
    readFromGeneratorFile();
    runProgram();
    return 0;
}