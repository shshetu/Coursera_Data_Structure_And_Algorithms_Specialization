#include <iostream>
#include <fstream>
using namespace std;

// Method: To Write to a file
void writeToFile(){
// Create a vairable of type: char[] array, ofstream
char data[100];
 ofstream outFile;
cout<<"Writing to the file"<<endl;
// Open a file in write mode
outFile.open("temp_file.txt");
// Write data from Program to the file
cout<<"Enter your name"<<endl;
cin.getline(data,100);
outFile<<data<<endl;
// Again Write data from Program to the file
cout<<"Enter your age"<<endl;
cin>>data;
outFile<<data<<endl;
cin.ignore(); // ignores any \n line character generated from console wile inputting
// Close the file
outFile.close();
}

// Method: To Write to a file Using String
void writeToFileUsingString(){
// Create a vairable of type: char[] array, ofstream
string data;
 ofstream outFile;
cout<<"Writing to the file"<<endl;
// Open a file in write mode
outFile.open("temp_file.txt");
// Write data from Program to the file
cout<<"Enter your name: ";
cin>>data;
outFile<<data<<endl;
// Again Write data from Program to the file
cout<<"Enter your age: ";
cin>>data;
outFile<<data;
// cin.ignore(); // ignores any \n line character generated from console wile inputting
// Close the file
outFile.close();
}

// Method: to Read Data from a file
void readFromFile(){     
// Create a vairable of type: ifstream
char data[100];
ifstream inFile;
cout<<"Reading from the File"<<endl;
// Open a file in read mode
inFile.open("temp_file.txt");
// Read data from a file and print to the console
inFile>>data;
cout<<data<<endl;
// Again read data from a file and print to the console
inFile>>data;
cout<<data<<endl;
// Close the file
inFile.close();
}

// Method Overloading: Read From a File: Parameterized
void readFromFile(string fileName){     
// Create a vairable of type: ifstream
char data[100];
ifstream inFile;
cout<<"Reading from the File"<<endl;
// Open a file in read mode
inFile.open(fileName);
// Read data from a file and print to the console
inFile>>data;
cout<<data<<endl;
// Again read data from a file and print to the console
inFile>>data;
cout<<data<<endl;
// Close the file
inFile.close();
}

// Read From a File: Parameterized
void readFromFileHavingAFileName(string fileName){     
// Create a vairable of type: ifstream
char data[100];
ifstream inFile;
cout<<"Reading from the File"<<endl;
// Open a file in read mode
inFile.open(fileName);
// Read data from a file and print to the console
inFile>>data;
cout<<data<<endl;
// Again read data from a file and print to the console
inFile>>data;
cout<<data<<endl;
// Close the file
inFile.close();
}

int main() {
    string fileName;
   // writeToFile();

//    cout<<"To Read from the file, enter the file name With extension: ";
//    cin>>fileName;
//     readFromFile(fileName);

// Write to File usign String
writeToFileUsingString();
    return 0;
}