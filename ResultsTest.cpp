#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include "Results.h"

using namespace std;

int main()
{
    ifstream res("Results.txt");
    int choice[] = {1, 2, 3, 4, 5};
    printResults(res, "Justin Guy", choice, 3);
    
    return 0;
}