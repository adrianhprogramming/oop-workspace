#include <iostream>
#include "Person.h"

extern PersonList shallowCopyPersonList(PersonList pl);

int main(){
    PersonList pl;
    shallowCopyPersonList(pl);    
    return 0;
    }
