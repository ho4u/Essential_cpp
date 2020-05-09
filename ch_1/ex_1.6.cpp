// Write a program to read in a sequence of integers from standard input.
// Place the values, in turn, in a built-in array and a vector.
// Iterate over the containers to sum the values.
// Display the sum and average of the entered values to standard output.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec;
    cout << "Enter some numbers: ";
    int num;
    while (cin >> num)
    {
        ivec.push_back(num);
    }

    int sum = 0;
    for (int i = 0; i < ivec.size(); i++)
    {
        sum += ivec[i];
    }
    
    cout << "The sum of " << ivec.size() << " elements is " << sum
         << ". The average is " << sum / ivec.size() << endl;

    return 0;
}

// int main()
// {
//     const int arr_sz = 1;
//     int array[arr_sz];
//     cout << "Enter some numbers: ";
//     int cnt = 0;
//     int num;
//     while (cin >> num && cnt < arr_sz)
//     {
//         array[cnt++] = num;
//     }

//     int sum = 0;
//     for (int i = 0; i < cnt; ++i)
//         sum += array[i];
//     cout << "The sum of " << cnt << " elements is " << sum
//          << ". The average is " << sum / cnt << endl;
//     return 0;
// }

