#include <iostream>
#include "functions.hpp"


int main() {
//    • Your main program should ask the user how many students in the section using getInteger.
int students = getInteger(1,20);
std::cout << "Number of Students: " << students << "." << std::endl;
//    • Create a dynamic array of that many of Student class.
//    • Call the readStudents function.
//    • Call displayStudents as entered.
//    • Use std::sort to sort the Students alphabetically by name. Since name is private, you will have to use the getName accessor method to accomplish this.
//    • Call displayStudents to list then in alphabetical order.
    return 0;
}
