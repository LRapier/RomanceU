/******************************************************************************
* File: main.cpp
* Authors: Sam Costello, Hannah Gonzales, Luke Rapier
*******************************************************************************/
#include <iostream>
#include <climits>
#include <limits>
#include <fstream>
#include <string>
#include <stdio.h> 
#include "character.h"
#include "dialogue.h"
using namespace std;

// Man Interaction Functions
void ManInteractionOne(MainCharacter player)
{
    int choice = 0; 
    dialogue1();
    
    cin>>choice; 
    while(choice != 1 && choice != 2 && choice != 3)
    {
        cin.clear();
	    cin.ignore(INT_MAX, '\n');
	    cout<<"That's not an option silly. Try again: ";
	    cin>>choice;
    }
   
    cout<<endl;
   
    if(choice == 1)
    {
        player.setPoints(-1);
      
        string line;
        ifstream manResponses("manResponses.txt");
        for (int i = 1; i <= 2; i++)
            getline(manResponses, line);
        cout<<line<<endl<<endl;
    }
    else if(choice == 2)
    {
        player.setPoints(0);
      
        string line;
        ifstream manResponses("manResponses.txt");
        for (int i = 1; i <= 3; i++)
            getline(manResponses, line);
        cout<<line<<endl<<endl;
    }
    else
    {
        player.setPoints(1);
      
        string line;
        ifstream manResponses("manResponses.txt");
        for (int i = 1; i <= 4; i++)
            getline(manResponses, line);
        cout<<line<<endl<<endl;
    }
    
    ManInteractionTwo(player);
}
void ManInteractionTwo(MainCharacter player) 
{
    int choice = 0; 
    dialogue2();
    
    cin>>choice; 
    while(choice != 1 && choice != 2 && choice != 3)
    {
        cin.clear();
	    cin.ignore(INT_MAX, '\n');
	    cout<<"That's not an option silly. Try again: ";
	    cin>>choice;
    }
   
    cout<<endl;
    
    if(choice == 1)
    {
        player.setPoints(0);
      
        string line;
        ifstream manResponses("manResponses.txt");
        for (int i = 1; i <= 7; i++)
            getline(manResponses, line);
        cout<<line<<endl<<endl;
    }
    else if(choice == 2)
    {
        player.setPoints(1);
      
        string line;
        ifstream manResponses("manResponses.txt");
        for (int i = 1; i <= 8; i++)
            getline(manResponses, line);
        cout<<line<<endl<<endl;
    }
    else
    {
        player.setPoints(-1);
      
        string line;
        ifstream manResponses("manResponses.txt");
        for (int i = 1; i <= 9; i++)
            getline(manResponses, line);
        cout<<line<<endl<<endl;
    }
    
    ManInteractionThree(player);
}
void ManInteractionThree(MainCharacter player)
{
    int choice = 0; 
    dialogue3();
    
    cin>>choice; 
    while(choice != 1 && choice != 2 && choice != 3)
    {
        cin.clear();
	    cin.ignore(INT_MAX, '\n');
	    cout<<"That's not an option silly. Try again: ";
	    cin>>choice;
    }
    
    cout<<endl;
    
    if(choice == 1)
    {
        player.setPoints(1);
      
        string line;
        ifstream manResponses("manResponses.txt");
        for (int i = 1; i <= 12; i++)
            getline(manResponses, line);
        cout<<line<<endl<<endl;
    }
    else if(choice == 2)
    {
        player.setPoints(0);
      
        string line;
        ifstream manResponses("manResponses.txt");
        for (int i = 1; i <= 13; i++)
            getline(manResponses, line);
        cout<<line<<endl<<endl;
    }
    else
    {
        player.setPoints(1);
      
        string line;
        ifstream manResponses("manResponses.txt");
        for (int i = 1; i <= 14; i++)
            getline(manResponses, line);
        cout<<line<<endl<<endl;
    }
    
    ManInteractionFour(player);
}
void ManInteractionFour(MainCharacter player)
{
    int choice = 0; 
    dialogue4();
    cout<<"You choose to approach... ";
    
    cin>>choice; 
    while(choice != 1 && choice != 2 && choice != 3)
    {
        cin.clear();
	    cin.ignore(INT_MAX, '\n');
	    cout<<"That's not an option silly. Try again: ";
	    cin>>choice;
    }
    
    cout<<endl;
    
    if(choice == 1)
    {
        player.setPoints(0);

        string line;
        ifstream manResponses("manResponses.txt");
        for (int i = 1; i <= 17; i++)
            getline(manResponses, line);
        cout << line << endl << endl;
    }
    else if(choice == 2)
    {
        player.setPoints(-1);
        
        string line;
        ifstream manResponses("manResponses.txt");
        for (int i = 1; i <= 18; i++)
            getline(manResponses, line);
        cout << line << endl << endl;
    }
    else
    {
        player.setPoints(0);

        string line;
        ifstream manResponses("manResponses.txt");
        for (int i = 1; i <= 19; i++)
            getline(manResponses, line);
        cout << line << endl << endl;
    }
    
    ManInteractionFive(player);
}
void ManInteractionFive(MainCharacter player)
{
    int choice = 0; 
    dialogue5();
    cout<<"You choose to approach... ";
    
    cin>>choice; 
    while(choice != 1 && choice != 2 && choice != 3)
    {
        cin.clear();
	    cin.ignore(INT_MAX, '\n');
	    cout<<"That's not an option silly. Try again: ";
	    cin>>choice;
    }
    
    cout<<endl;
    
    if(choice == 1)
    {
        player.setPoints(1);
    }
    else if(choice == 2)
    {
        player.setPoints(0);
    }
    else
    {
        player.setPoints(-1);
    }
}

// Woman Interaction Functions
void WomanInteractionOne(MainCharacter player)
{
    int choice = 0; 
    dialogue1();
    
    cin>>choice; 
    while(choice != 1 && choice != 2 && choice != 3)
    {
        cin.clear();
	    cin.ignore(INT_MAX, '\n');
	    cout<<"That's not an option silly. Try again: ";
	    cin>>choice;
    }
    
    cout<<endl;
    
    if(choice == 1)
    {
        player.setPoints(0);
      
        string line;
        ifstream womanResponses("womanResponses.txt");
        for (int i = 1; i <= 2; i++)
            getline(womanResponses, line);
        cout<<line<<endl<<endl;
    }
    else if(choice == 2)
    {
        player.setPoints(1);
      
        string line;
        ifstream womanResponses("womanResponses.txt");
        for (int i = 1; i <= 3; i++)
            getline(womanResponses, line);
        cout<<line<<endl<<endl;
    }
    else
    {
        player.setPoints(-1);
      
        string line;
        ifstream womanResponses("womanResponses.txt");
        for (int i = 1; i <= 4; i++)
            getline(womanResponses, line);
        cout<<line<<endl<<endl;
    }
    
    WomanInteractionTwo(player);
}
void WomanInteractionTwo(MainCharacter player)
{
    int choice = 0; 
    dialogue2();
    
    cin>>choice; 
    while(choice != 1 && choice != 2 && choice != 3)
    {
        cin.clear();
	    cin.ignore(INT_MAX, '\n');
	    cout<<"That's not an option silly. Try again: ";
	    cin>>choice;
    }
    
    cout<<endl;
    
    if(choice == 1)
    {
        player.setPoints(1);
      
        string line;
        ifstream womanResponses("womanResponses.txt");
        for (int i = 1; i <= 7; i++)
            getline(womanResponses, line);
        cout<<line<<endl<<endl;
    }
    else if(choice == 2)
    {
        player.setPoints(0);
      
        string line;
        ifstream womanResponses("womanResponses.txt");
        for (int i = 1; i <= 8; i++)
            getline(womanResponses, line);
        cout<<line<<endl<<endl;
    }
    else
    {
        player.setPoints(-1);
      
        string line;
        ifstream womanResponses("womanResponses.txt");
        for (int i = 1; i <= 9; i++)
            getline(womanResponses, line);
        cout<<line<<endl<<endl;
    }
    
    WomanInteractionThree(player);
}
void WomanInteractionThree(MainCharacter player)
{
    int choice = 0; 
    dialogue3();
    cout<<"You choose to approach... ";
    
    cin>>choice; 
    while(choice != 1 && choice != 2 && choice != 3)
    {
        cin.clear();
	    cin.ignore(INT_MAX, '\n');
	    cout<<"That's not an option silly. Try again: ";
	    cin>>choice;
    }
    
    cout<<endl;
    
    if(choice == 1)
    {
        player.setPoints(0);
        
        string line;
        ifstream womanResponses("womanResponses.txt");
        for (int i = 1; i <= 12; i++)
            getline(womanResponses, line);
        cout << line << endl << endl;
    }
    else if (choice == 2)
    {
        player.setPoints(-1);
        
        string line;
        ifstream womanResponses("womanResponses.txt");
        for (int i = 1; i <= 13; i++)
            getline(womanResponses, line);
        cout << line << endl << endl;
    }
    else
    {
        player.setPoints(1);
        
        string line;
        ifstream womanResponses("womanResponses.txt");
        for (int i = 1; i <= 14; i++)
            getline(womanResponses, line);
        cout << line << endl << endl;
    }
    
    WomanInteractionFour(player);
}
void WomanInteractionFour(MainCharacter player)
{
    int choice = 0; 
    dialogue4();
    cout<<"You choose to approach... ";
    
    cin>>choice; 
    while(choice != 1 && choice != 2 && choice != 3)
    {
        cin.clear();
	    cin.ignore(INT_MAX, '\n');
	    cout<<"That's not an option silly. Try again: ";
	    cin>>choice;
    }
    
    cout<<endl;
    
    if(choice == 1)
    {
        player.setPoints(0);

        string line;
        ifstream womanResponses("womanResponses.txt");
        for (int i = 1; i <= 17; i++)
            getline(womanResponses, line);
        cout << line << endl << endl;
    }
    else if(choice == 2)
    {
        player.setPoints(-1);
        
        string line;
        ifstream womanResponses("womanResponses.txt");
        for (int i = 1; i <= 18; i++)
            getline(womanResponses, line);
        cout << line << endl << endl;
    }
    else
    {
        player.setPoints(1);

        string line;
        ifstream womanResponses("womanResponses.txt");
        for (int i = 1; i <= 19; i++)
            getline(womanResponses, line);
        cout << line << endl << endl;
    }
    
    WomanInteractionFive(player);
}
void WomanInteractionFive(MainCharacter player)
{
    int choice = 0; 
    dialogue5();
    cout<<"You choose to approach... ";
    
    cin>>choice; 
    while(choice != 1 && choice != 2 && choice != 3)
    {
        cin.clear();
	    cin.ignore(INT_MAX, '\n');
	    cout<<"That's not an option silly. Try again: ";
	    cin>>choice;
    }
    
    cout<<endl;
    
    if(choice == 1)
    {
        player.setPoints(0); 
    }
    else if(choice == 2)
    {
        player.setPoints(1); 
    }
    else
    {
        player.setPoints(-1); 
    }
}

// Displays dialogue files 
void dialogue1()
{
    string line;
    ifstream d1("dialogue1.txt");
    if(d1.is_open())
    {
        while(getline(d1,line) )
        {
            cout<<line<<'\n';
        }
        d1.close();
    }
}
void dialogue2()
{
    string line;
    ifstream d2("dialogue2.txt");
    if(d2.is_open())
    {
        while(getline(d2,line) )
        {
            cout<<line<<'\n';
        }
        d2.close();
    }
}
void dialogue3()
{
    string line;
    ifstream d3("dialogue3.txt");
    if(d3.is_open())
    {
        while(getline(d3,line) )
        {
            cout<<line<<'\n';
        }
        d3.close();
   }
}
void dialogue4()
{
    string line;
    ifstream d4("dialogue4.txt");
    if(d4.is_open())
    {
        while(getline(d4,line) )
        {
            cout<<line<<'\n';
        }
        d4.close();
    }
}
void dialogue5()
{
    string line;
    ifstream d5("dialogue5.txt");
    if(d5.is_open())
    {
        while(getline(d5,line) )
        {
            cout<<line<<'\n';
        }
        d5.close();
    }
}

void introduction()
{
    string line;
    ifstream intro("intro.txt");
    if(intro.is_open())
    {
        while(getline(intro,line) )
        {
            cout<<line<<'\n';
        }
        intro.close();
    }
  
    string mImage;
    ifstream man("justinGuy.txt");
    if(man.is_open())
    {
        while(getline(man,mImage) )
        {
            cout<<mImage<<'\n';
        }
        man.close();
   }
   
    string wImage;
    ifstream woman("girlboss.txt");
    if(woman.is_open())
    {
        while(getline(woman,wImage) )
        {
            cout<<wImage<<'\n';
        }
        woman.close();
    }
}

void approach(MainCharacter player)
{
    int choice = 0; 
    
    cin>>choice; 
    while(choice != 1 && choice != 2 && choice != 3)
    {
        cin.clear();
	    cin.ignore(INT_MAX, '\n');
	    cout<<"That's not an option silly. Try again: ";
	    cin>>choice;
    }
    while(choice == 3)
    {
        cout<<"Give up and go home"<<endl<<endl;
        cin.clear();
	    cin.ignore(INT_MAX, '\n');
	    string line;
        ifstream giveUp("giveUp.txt");
        if(giveUp.is_open())
        {
            while(getline(giveUp,line) )
            {
                cout<<line<<'\n';
            }
            giveUp.close();
        }
	    cin>>choice;
    }
    
    if(choice == 1)
    {
        cout<<"Average guy"<<endl<<endl;
        ManInteractionOne(player);
    }
    else
    {
        cout<<"Suit girl"<<endl<<endl;
        WomanInteractionOne(player);
    }
}

void printResults(ifstream &fin, string mcName, int choices[], int score)
{
    string printLine = "";
    string gradeFile = "";
    switch(score)
    {
        case 5: case 4:
            gradeFile = "GradeA.txt";
            break;
        case 3: case 2:
            gradeFile = "GradeB.txt";
            break;
        case 1: case 0: case -1:
            gradeFile = "GradeC.txt";
            break;
        case -2: case -3:
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
            if(mcName.length() <= 4)
            {
                cout<<"\t\t\t  |"<<endl;
                printLine +="\t\t\t  |";
            }
            else if(mcName.length() <= 12)
            {
                cout<<"\t\t  |"<<endl;
                printLine +="\t\t  |";
            }
            else if(mcName.length() <= 20)
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

int main()
{
    MainCharacter player;
    player.setName();
    cout<<player<<endl;
   
    introduction();
    approach(player);
   
    ifstream res("results.txt");
    int choice[] = {1, 2, 3, 4, 5};
    printResults(res, player.getName(), choice, player.getPoints()); //choice needs to track // score needs to add
    
    return 0;
}
