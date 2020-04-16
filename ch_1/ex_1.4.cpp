// Try to extend the program 1.1: (1) Ask the user to enter both a first and last name 
// and (2) modify the output to write out both names.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first_name, last_name;
    cout << "Enter your first name, please: ";
    cin >> first_name;

    cout << "Enter your last name, please: ";
    cin >> last_name;
    
    cout << '\n'
         << "Hello, "
         << first_name << ' ' << last_name
         << " ... and goodbye!\n";
    return 0;
}