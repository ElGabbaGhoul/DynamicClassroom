#include <iostream>
#include "required.hpp"


int main() {

    Account acct1;
    Account *acct2 = new Account;
    Account *acct3 = new Account(1234,123.45);

    delete acct2;
    delete acct3;



//    • Your main program should ask the user how many students in the section using getInteger.
//    • Create a dynamic array of that many of Student class.
//    • Call the readStudents function.
//    • Call displayStudents as entered.
//    • Use std::sort to sort the Students alphabetically by name. Since name is private, you will have to use the getName accessor method to accomplish this.
//    • Call displayStudents to list then in alphabetical order.
    return 0;
}
