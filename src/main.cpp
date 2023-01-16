
#include <iostream>
#include <math.h>
#include <algorithm>
#include <Windows.h>
#include <fstream>
#include "rechenoperationen.h"
// simplesnippets im suchfeld eingeben für die snippet datei

using namespace std;

//=============================================================================
//                           MAIN
//=============================================================================



int main()
{
    srand(time(NULL));
    SetConsoleOutputCP(CP_UTF8);
    string pfad = "..\\resources\\eingabe.csv";
    string input;
    input = zeilelesen(pfad);

    while (input.length() > 0)
    {

        
        switch (op)
        {
        case '+':
            cout << addieren(x, y) << endl;
            break;
        case '-':
            cout << subtrahieren(x, y) << endl;
            break;
        case '*':
            cout << multiplizieren(x, y) << endl;
            break;
        case '/':
            cout << dividieren(x, y) << endl;
            break;
        }

        input.erase(0, laenge);
    }
    return 0;
}

//=============================================================================
//                           END OF FILE
//=============================================================================
