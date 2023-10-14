#include <iostream>
#include <time.h>
#include <stdlib.h> 

using namespace std;
// typing

// fake registration system for when X pressed
void Registration(){
    string name;
    int grade;
    float GPA;
    cout <<"Student Name: ";
    getline(cin >> ws, name);
    cout <<"Grade: ";
    cin >> grade;
    cout <<"GPA(4.0 scale): ";
    cin >> GPA;
    cout << " \n \n ";
    cout << "Your Info: \n Name: "<< name <<"\n Grade: " << grade <<"\n GPA: " << GPA;
}


int main()
{
    char C, G, X;
    char bird, Purple;
    cout << "This is an app I think" << endl;
    cout << "Press C for calculator. Press G for guessing game. Press X to register into Princeton. \n E to exit.";
    cin >> bird;
    
    //calculator system for when C pressed
    if (bird == ('C')){

        cout << "Thank you for choosing the C++ California Instruments Calculator!" << endl;
        cout << " " << endl; 

        float x;
        float y;
        char symbol;
        char A, S, M, D;
        cout << "Enter first number: ";
        cin >> x;
        cout << "Enter second number: ";
        cin >> y;
        cout << "Operation? ";
        cin >> symbol;
        if (symbol == ('A')){
            cout << "Your answer is " << x + y << endl;
        }

        if (symbol == ('S')){
            cout << "Your answer is " << x - y << endl;
        }

        if (symbol == ('M')){
            cout << "Your answer is " << x * y << endl;
        }

        if (symbol == ('D')){
            cout << "Your answer is " << x / y << endl;
        }

    }
//guessing game for when G pressed
    if (bird == ('G')){
		srand(time(NULL));
        int secret = (rand() % 10); // number from 0-10
        int guess;
        cout << "Guessing game. Guesss the number from 0-10: ";
        cin >> guess;

        while (secret != guess){
            cout << "Wrong. \n";
            cout << "Try again: ";
            cin >> guess;

        }

        cout << "Correct, you win!" << endl;
    }

    if (bird == ('X')){
        Registration();
    }
// E for when user choosed to exit
    if (bird == ('E')){
        cout << "App closed." << endl;
        return 0;
    }



    return 0;
}
