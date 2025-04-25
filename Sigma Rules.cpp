// Sigma Rules.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int NoSig;

    while (true)
    {
        cout << "which Sigma rules you wanna find out ? No. ";
        cin >> NoSig;

        switch (NoSig)
        {
        case 1:
            cout << "Sigma rule No.1 : the girl you like might not like you back." << endl;
            break;
        case 2:
            cout << "Sigma rule No.2 : always be late." << endl;
            break;
        case 3:
            cout << "Sigma rule No.3 : don't sing in front of girls." << endl;
            break;
        case 4:
            cout << "Sigma rule No.4 : 'my baaad, can't rememberrr...'" << endl;
            break;
        case 5:
            cout << "Sigma rule No.5 : don't be affected by other people." << endl;
            break;
        case 6:
            cout << "Sigma rule No.6 : secret, don't ask too much." << endl;
            break;
        case 7:
            cout << "Sigma rule No.7 : don't want just say no." << endl;
            break;
        }
    }
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
