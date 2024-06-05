
#include <iostream>
using namespace std;

/*  Write a Program to ask the user to enter His/Her Age and Driver Licence then Print "Hired" If both conditions are met Otherwise Print "Rejected"
*/

int main()

{
    
    int age;
    cout << "Please enter your age " << endl;
    cin >> age;


    bool Drive;
    cout << "Do you have A Driver Licence" << endl;
    cin >> Drive;


    if (age >= 20 && Drive == 1 ) {

        cout << "Hired" << endl;

    }

    else {
        cout << "Rejected" << endl;

    }


    return 0;

   // created by @ilyes_trabelsi
}

