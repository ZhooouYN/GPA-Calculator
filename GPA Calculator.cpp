// GPA Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double DE2, PEEE2, EM2, EWW, DCI, PCDS, DF, IED, GPA, gpa_sem1, CGPA;
    cout << "Enter the grade for sem1 GPA : ";
    cin >> gpa_sem1;
    cout << "Enter the grade for DE 2 : ";
    cin >> DE2;
    cout << "Enter the grade for PEEE 2 : ";
    cin >> PEEE2;
    cout << "Enter the grade for EM 2 : ";
    cin >> EM2;
    cout << "Enter the grade for EWW : ";
    cin >> EWW;
    cout << "Enter the grade for DCI : ";
    cin >> DCI;
    cout << "Enter the grade for PCDS : ";
    cin >> PCDS;
    cout << "Enter the grade for DF : ";
    cin >> DF;
    cout << "Enter the grade for IED : ";
    cin >> IED;

    GPA = (DE2 * 4.0 + PEEE2 * 5.0 + EM2 * 4.0 + EWW * 1.0 + DCI * 1.0 + DF * 1.0 + PCDS * 2.0 + IED * 6.0) / 24.0;
    CGPA = (gpa_sem1 + GPA) / 2.0;
    if ( GPA >= 3.5 )
        cout << "your GPA is " << GPA << " which is " << "fineeeeeeeeeee" << endl;
    else
        cout << "your GPA is " << GPA << " which is " << "fkkkkkkkkkkked" << endl;
    cout << "your CGPA is " << CGPA << ", dont know can go which university";
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
