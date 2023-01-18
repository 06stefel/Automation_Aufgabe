
#include <iostream>
#include <math.h>
#include <algorithm>
#include <Windows.h>
#include <fstream>
#include "rechenoperationen.h"
#include "luca.h"
#include "florian.h"
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
        char op = ' ';
        size_t op_pos = string::npos;

        for (int i = 0; i < input.length(); i++)
        {
            op = input[i];
            if (op == '+' || op == '-' || op == '*' || op == '/')
            {
                op_pos = input.find(op);
                break;
            }
        }

        float x = 0.0;
        float y = 0.0;
        string operand_str1 = input.substr(0, op_pos);
        string operand_str2 = input.substr(op_pos + 1);
        int space_pos = operand_str2.find(' ');
        operand_str2 = operand_str2.substr(0, space_pos);
        x = stof(operand_str1);
        y = stof(operand_str2);
        int laenge = operand_str1.length() + operand_str2.length() + 1;

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
