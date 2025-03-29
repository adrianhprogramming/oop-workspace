#include <iostream>
#include "Person.h"
PersonList createPersonList(int n);
PersonList createPersonList(int n){
PersonList PersonList;

int* numPeople = new int[n];

Person* array = new Person[n];
for (int i = 0; i < n; i++)
{
    array[i].name = "Jane Doe";
    array[i].age = 1;
}

return PersonList;
}



