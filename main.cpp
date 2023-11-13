/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <climits>
#include "woman.h"
#include "man.h"
using namespace std;

class MainCharacter
{
    private:
        string name;
        int points;
        //char grade;
    public: 
        void setName()
        {
            cout<<"What's your name?: ";
            cin>>name;
        }
        void setPoints(int p)
        {
            points += p;
        }
        friend ostream& operator<<(ostream &os, const MainCharacter&);
};

ostream& operator<<(ostream &os, const MainCharacter &mc)
{
    os<<mc.name;
    return os;
}

class Character
{
  private:
    int score;
    string name;
  public:
};

class Man : public Character
{
  private:
  public: 
};

class Woman : public Character
{
  private:
  public: 
};

Character createCharacter();

void intro()
{
    cout<<""<<endl; 
}

void approach()
{
    int choice = 0; 
    cout<<"You see two people sitting at Woo Cafe..."<<endl;
    cout<<"You choose to approach... ";
    
    // display images 
    
    cin>>choice; 
    while(choice != 1 && choice != 2 && choice != 3)
    {
        cin.clear();
	    cin.ignore(INT_MAX, '\n');
	    cout<<"Error. Try again: ";
	    cin>>choice;
    }
    
    if(choice == 1)
    {
        cout<<"MAN"<<endl; // call man function
        ManInteractionOne();
    }
    else if(choice == 2)
    {
        cout<<"WOMAN"<<endl; // call woman function
        WomanInteractionOne();
    }
    else
    {
        cout<<"give up and go home"<<endl; // make do again with some quippy remark
    }
}

int main()
{
    approach();

    return 0;
}





