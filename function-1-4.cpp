#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl);

PersonList shallowCopyPersonList(PersonList pl){
PersonList p2;
p2 = pl;
return p2;
}
