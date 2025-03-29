#include <iostream>
#include "Person.h"

extern PersonList deepCopyPersonList(PersonList pl);

int main(){
    PersonList pl;
    deepCopyPersonList(pl);    
    return 0;
    }
