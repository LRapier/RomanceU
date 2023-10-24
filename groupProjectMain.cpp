/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <climits>

using namespace std;

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
    while(choice != 1 && choice != 2)
    {
        cin.clear();
	    cin.ignore(INT_MAX, '\n');
	    cout<<"Error. Try again: ";
	    cin>>choice;
    }
    
    if (choice == 1)
    {
        cout<<"MAN"<<endl; //call man function
    }
    else 
    {
        cout<<"WOMAN"<<endl; //call woman function
    }
}

int main()
{
    approach();

    return 0;
}
