// Write a program to ask the user his or her name. 
// Read the response. Confirm that the input is at least two
// characters in length. If the name seems valid, respond to the user.
// Provide two implementations: one using a C-style character string,
// and the other using a string class object.

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

void prog1()
{
    const size_t name_sz = 20;
    char usr_name[name_sz];
    cout << "Enter user name: ";
    cin >> setw(name_sz) >> usr_name;
    if (strlen(usr_name) > 1)
        cout << "Your name is " << usr_name << endl;
    else
        cout << "Your name is too short" << endl;
}

void prog2()
{
    string usr_name;
    cout << "Enter user name: ";
    cin >> usr_name;
    if (usr_name.size() > 1)
        cout << "Your name is " << usr_name << endl;
    else
        cout << "Your name is too short" << endl;
}

int main()
{
    prog1();
    //prog2();

    return 0;
}