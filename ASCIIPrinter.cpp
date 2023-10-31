#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include "ASCIIPrinter.h"

using namespace std;

void printAscii(ifstream &fin)
{
    string printLine = "";
    while(!fin.eof())
    {
        getline(fin, printLine);
        cout<<printLine<<endl;
    }
    fin.close();
}