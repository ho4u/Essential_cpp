// The switch statement of Section 1.4 displays a different consolation message 
// based on the number of wrong guesses. Replace this with an array of four string 
// messages that can be indexed based on the number of wrong guesses.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const char *messages[] = {
        "Go on, make a guess. ",
        "It must be getting pretty frustrating by now!\n",
        "Oops! Nice guess but not quite it.\n",
        "Hmm. Sorry. Wrong again.\n",
        "Ah, this is harder than it looks, isn't it?\n"
    };
    const int other_answers = 4;
    int num_tries;
    cout << "Enter num_tries: ";
    cin >> num_tries;
    if (num_tries > other_answers)
        num_tries = other_answers;
    cout << messages[num_tries];

    return 0;
}