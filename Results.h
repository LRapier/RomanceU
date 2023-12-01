#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

using namespace std;

void printResults(ifstream &fin, string mcName, int choices[], int score)
{
    string printLine = "";
    string gradeFile = "";
    switch(score)
    {
        case 5, 4:
            gradeFile = "GradeA.txt";
            break;
        case 3, 2:
            gradeFile = "GradeB.txt";
            break;
        case 1, 0, -1:
            gradeFile = "GradeC.txt";
            break;
        case -2, -3:
            gradeFile = "GradeD.txt";
            break;
        default:
            gradeFile = "GradeF.txt";
            break;
    }
    
    ofstream resultsPrint("YourResults.txt");
    
    do
    {
        getline(fin, printLine);
        if(printLine.find('x') != std::string::npos)
        {
            cout<<"|	Your Name: "<<mcName<<"\t\t\t\t\t\t\t\t\t\t";
            printLine = "|	Your Name: " + mcName + "\t\t\t\t\t\t\t\t\t\t";
            if(partner.length() <= 4)
            {
                cout<<"\t\t\t  |"<<endl;
                printLine +="\t\t\t  |";
            }
            else if(partner.length() <= 12)
            {
                cout<<"\t\t  |"<<endl;
                printLine +="\t\t  |";
            }
            else if(partner.length() <= 20)
            {
                cout<<"\t  |"<<endl;
                printLine +="\t  |";
            }
            else
            {
                cout<<"  |"<<endl;
                printLine +="  |";
            }
        }
        else if(printLine.find('w') != std::string::npos)
        {
            cout<<"|	Your Choices: (";
            printLine = "|	Your Choices: (";
            for(int x = 0; x < 5; x++)
            {
                cout<<choices[x];
                printLine += choices[x];
                if(x != 4)
                {
                    cout<<", ";
                    printLine += ", ";
                }
            }
            cout<<")										  	  |"<<endl;
            printLine += ")										  	  |";
        }
        else if(printLine.find('z') != std::string::npos)
        {
            cout<<"|	Your Score: "<<score<<"/5							  						  |"<<endl;
            printLine = "|	Your Score: " + to_string(score) + "/5							  						  |";
        }
        else
            cout<<printLine<<endl;
        resultsPrint<<printLine<<endl;
    }
    while(!fin.eof());
    fin.close();
    
    fin.open(gradeFile);
    do
    {
        getline(fin, printLine);
        cout<<printLine<<endl;
        resultsPrint<<printLine<<endl;
    }
    while(!fin.eof());
    fin.close();
    resultsPrint.close();
}
