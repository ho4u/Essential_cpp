#include <iostream>
#include <string>

using namespace std;

bool validate(const string &pwd)
{
    bool result = true;
    for (size_t i = 0; i != pwd.size(); ++i)
        if (!isalpha(pwd[i]) && !isdigit(pwd[i]))
        {
            result = false;
            break;
        }
    return result;
}

int main(int argc, char const *argv[])
{
    string user_name;
    cout << "enter your name: ";
    cin >> user_name;
    cout << "\n\t" << user_name;
    char usr_rsp;
    cout << "\nSay yes or no(y or n): ";
    cin >> usr_rsp;
    string pwd;
    cout << "enter password: ";
    cin >> pwd;
    if (!pwd.empty() &&
        validate(pwd))
    {
        cout << "password is correct" << endl;
    }
    else
    {
        cout << "password is incorrect" << endl;
    }
    return 0;
}
