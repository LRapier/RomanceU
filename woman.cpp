/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <climits>
using namespace std;

void WomanInteractionOne();
void WomanInteractionTwo();
void WomanInteractionThree();
void WomanInteractionFour();
void WomanInteractionFive();

void WomanInteractionOne()
{
    int choice = 0; 
    cout<<"Insert dialog"<<endl;
    cout<<"You choose to approach... ";
    
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
        cout<<"1.1"<<endl; // (good)
    }
    else if(choice == 2)
    {
        cout<<"2.1"<<endl; // (nuetral)
    }
    else
    {
        cout<<"3.1"<<endl; // (bad)
    }
    
    WomanInteractionTwo();
}

void WomanInteractionTwo()
{
    int choice = 0; 
    cout<<"Insert dialog"<<endl;
    cout<<"You choose to approach... ";
    
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
        cout<<"1.2"<<endl; // (good)
    }
    else if(choice == 2)
    {
        cout<<"2.2"<<endl; // (nuetral)
    }
    else
    {
        cout<<"3.2"<<endl; // (bad)
    }
    
    WomanInteractionThree();
}

void WomanInteractionThree()
{
    int choice = 0; 
    cout<<"Insert dialog"<<endl;
    cout<<"You choose to approach... ";
    
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
        cout<<"1.3"<<endl; // (good)
    }
    else if(choice == 2)
    {
        cout<<"2.3"<<endl; // (nuetral)
    }
    else
    {
        cout<<"3.3"<<endl; // (bad)
    }
    
    WomanInteractionFour();
}

void WomanInteractionFour()
{
    int choice = 0; 
    cout<<"Insert dialog"<<endl;
    cout<<"You choose to approach... ";
    
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
        cout<<"1.4"<<endl; // (good)
    }
    else if(choice == 2)
    {
        cout<<"2.4"<<endl; // (nuetral)
    }
    else
    {
        cout<<"3.4"<<endl; // (bad)
    }
    
    WomanInteractionFive();
}

void WomanInteractionFive()
{
    int choice = 0; 
    cout<<"Insert dialog"<<endl;
    cout<<"You choose to approach... ";
    
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
        cout<<"1.5"<<endl; // (good)
    }
    else if(choice == 2)
    {
        cout<<"2.5"<<endl; // (nuetral)
    }
    else
    {
        cout<<"3.5"<<endl; // (bad)
    }
}

int main()
{
    WomanInteractionOne();

    return 0;
}
