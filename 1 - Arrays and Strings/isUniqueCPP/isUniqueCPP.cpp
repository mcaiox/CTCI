// isUniqueCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <bitset>
using namespace std;

bool isUniqueChars(std::string str) {
    if (str.size() > 256)
        return false;
    std::bitset<256> values;  //create an array 0-256 where each element is initialised to false.


    for(char c : str)
    {
        //c is the ascii number equiv
        //Console.WriteLine(values[c]);
        if (values[c]) // for each char, we check the values array and if it has seeen it before it will return true.
        {
            return false;
        }
        values[c] = true;

    }
    return true;
}
int main()
{
    cout << isUniqueChars("helo") << endl;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
