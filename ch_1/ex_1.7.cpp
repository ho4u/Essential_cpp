// Using your favorite editor, type two or more lines of text into a file.
// Write a program to open the file,reading each word into a vector<string> object.
// Iterate over the vector, displaying it to cout.
// That done, sort the words using the sort() generic algorithm,
// #include <algorithm>
// sort(container.begin(), container.end());
// Then print the sorted words to an output file.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ifstream infile("words.txt");
    if (!infile)
    {
        cerr << "Can't open words.txt\n";
        return -1;
    }

    vector<string> words;
    string word;
    while (infile >> word)
        words.push_back(word);

    for (int i = 0; i != words.size(); ++i)
        cout << words[i] << ' ';
    cout << endl;

    sort(words.begin(), words.end());

    ofstream outfile("sort_words.txt");
    if (!outfile)
    {
        cerr << "Can't open sort_words.txt\n";
        return -1;
    }
    for (int i = 0; i != words.size(); ++i)
        outfile << words[i] << endl;
    
    return 0;
}