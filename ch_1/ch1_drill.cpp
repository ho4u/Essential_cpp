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
    if (usr_rsp == 'y' || usr_rsp == 'Y')
    {
        cout << "You said yes." << endl;
    }
    else if (usr_rsp == 'N' || usr_rsp == 'n')
    {
        cout << "You said no." << endl;
    }

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

    cout << "Enter a sentence: ";
    string line;
    
    // ws discards leading whitespace (\n, \t, ' ') from an input stream. 
    getline(cin >> ws, line); 
    int vowel_cnt = 0;
    for (string::size_type i = 0; i != line.size(); ++i)
    {
        switch (line[i])
        {
            case 'a': case 'A':
            case 'o': case 'O':
            case 'u': case 'U':
            case 'e': case 'E':
            case 'i': case 'I':
                ++vowel_cnt;
                break;
        }
    }
    cout << "The sentence \"" << line << "\" has " 
         << vowel_cnt << " vowel(s)." << endl;     
    
    return 0;
}
