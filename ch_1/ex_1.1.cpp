// Enter the main() program, shown earlier.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string user_name;
    cout << "Enter your name, please: ";
    cin >> user_name;
    cout << '\n'
         << "Hello, "
         << user_name
         << " ... and goodbye!\n";
    return 0;
}