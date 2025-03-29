#include <iostream>
#include "Person.h"


PersonList createPersonList(int n);
PersonList createPersonList(int n){
PersonList p;
p.numPeople = n;

Person* people;
p.people = people;
people = new Person[n];
for (int i = 0; i < n; i++)
{
    people[i].name = "Jane Doe";
    people[i].age = 1;        /* code */
}
return p;
}




