#include <iostream>
#include "Person.h"

//1-1 Suppose you have a struct called Person that looks like this:
//Note: create a Person.h files for this struct. Don't forget to add a Header guardLinks to an external site. to this file.

//In a file called function-1-1.cpp, include Person.h and write a function called createPersonArray that takes an integer argument n and returns an array of n Person structs. 
// The name and age fields of each struct should be set to "John Doe" and 0, respectively.
//Signature: Person* createPersonArray(int n) 
//Implement a program with a main method that tests your code in a file called main-1-1.cpp

Person* createPersonArray(int n);

Person* createPersonArray(int n){
int size;
size = n;
Person array[size];

for (int i = 0; i < size; i++)
{
    array[i].name = "John Doe";
    array[i].age = 0;
}
return 0;
} 
