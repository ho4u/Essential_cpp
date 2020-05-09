#include <iostream>
#include <fstream>
#include <string>
#include <vector>

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

    const int seq_cnt = 6;
    string seq_names[seq_cnt] = {
        "fibonacci",
        "lucas",
        "pell",
        "triangular",
        "square",
        "pentagonal" 
    };

    vector<int> fibonacci   {1, 1, 2, 3, 5, 8, 13, 21},
                lucas       {1, 3, 4, 7, 11, 18, 29, 47},
                pell        {1, 2, 5, 12, 29, 70, 169, 408},
                triangular  {1, 3, 6, 10, 15, 21, 28, 36},
                square      {1, 4, 9, 16, 25, 36, 49, 64},
                pentagonal  {1, 5, 12, 22, 35, 51, 70, 92};

    vector<int> *sequnces[seq_cnt] = {
        &fibonacci, &lucas, &pell,
        &triangular, &square, &pentagonal 
    };

    ofstream outfile("sequnces.txt");
    if (!outfile)
    {
        cerr << "can't open file sequences.txt" << endl;
        return -1;
    }
    for(int i = 0; i != seq_cnt; ++i)
    {   
        outfile << seq_names[i] << ": ";
        vector<int> *cur_seq = sequnces[i];
        for(int j = 0; j != cur_seq->size(); ++j)
            outfile << (*cur_seq)[j] << " ";
        outfile << endl;
    }
    return 0;
}
