/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "ASCIIPrinter.h"

using namespace std;

int main()
{
    ifstream guy("Justin Guy ASCII.txt");
    printAscii(guy);
    
    system("clear");
    
    ifstream girl("Girlboss ASCII.txt");
    printAscii(girl);
    
    return 0;
}