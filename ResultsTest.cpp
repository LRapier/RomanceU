#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>

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
        case 1:
            gradeFile = "GradeF.txt";
            break;
    }
    
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
    }
    fin.close();
    
    fin.open(gradeFile);
    while(!fin.eof())
    {
        getline(fin, printLine);
        cout<<printLine<<endl;
    }
    fin.close();
}

int main()
{
    ifstream res("Results.txt");
    int choice[] = {1, 2, 3, 4, 5};
    printResults(res, "Justin Guy", choice, 4);
    
    return 0;
}