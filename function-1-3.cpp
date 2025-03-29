#include <iostream>
#include "Person.h"

PersonList deepCopyPersonList(PersonList pl);

PersonList deepCopyPersonList(PersonList pl){
PersonList p2;
p2 = pl;
return p2;
}
