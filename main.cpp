#include <iostream>
#include "required.hpp"


int main() {
    Object *a, *b, *c;

    std::cout << "Object count 1: " << Object::getCount() << std::endl;
    a=new Object;

    std::cout << "Object count 2: " << Object::getCount() << std::endl;
    b=new Object;

    std::cout << "Object count 3: " << Object::getCount() << std::endl;
    c=new Object;

    std::cout << "Object count 4: " << Object::getCount() << std::endl;
    delete a;
    delete b;
    std::cout << "Object count 5: " << Object::getCount() << std::endl;

//    • Your main program should ask the user how many students in the section using getInteger.
//    • Create a dynamic array of that many of Student class.
//    • Call the readStudents function.
//    • Call displayStudents as entered.
//    • Use std::sort to sort the Students alphabetically by name. Since name is private, you will have to use the getName accessor method to accomplish this.
//    • Call displayStudents to list then in alphabetical order.
    return 0;
}
