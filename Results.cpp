#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include "Results.h"

using namespace std;

void printResults(ifstream &fin, string partner, int choices[], int score)
{
    string printLine = "";
    string gradeFile = "";
    switch(score)
    {
        case 5:
            gradeFile = "GradeA.txt";
            break;
        case 4:
            gradeFile = "GradeB.txt";
            break;
        case 3:
            gradeFile = "GradeC.txt";
            break;
        case 2:
            gradeFile = "GradeD.txt";
            break;
        default:
            gradeFile = "GradeF.txt";
            break;
    }
    
    ofstream resultsPrint("YourResults.txt");
    
    while(!fin.eof())
    {
        getline(fin, printLine);
        if(printLine.find('x') != std::string::npos)
            cout<<"|	Your Partner Choice: "<<partner<<"									  		  |"<<endl;
        else if(printLine.find('w') != std::string::npos)
        {
            cout<<"|	Your Choices: (";
            for(int x = 0; x < 5; x++)
            {
                cout<<choices[x];
                if(x != 4)
                    cout<<", ";
            }
            cout<<")										  	  |"<<endl;
        }
        else if(printLine.find('z') != std::string::npos)
            cout<<"|	Your Score: "<<score<<"/5							  						  |"<<endl;
        else
            cout<<printLine<<endl;
        resultsPrint<<printLine<<endl;
    }
    fin.close();
    
    fin.open(gradeFile);
    while(!fin.eof())
    {
        getline(fin, printLine);
        cout<<printLine<<endl;
        resultsPrint<<printLine<<endl;
    }
    fin.close();
    resultsPrint.close();
}