/******************************************************************************



*******************************************************************************/
#include <iostream>
#include <climits>
#include <fstream>
#include "woman.h"
#include "man.h"
#include "dialogue.h"
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

// Man Interactions
void ManInteractionOne()
{
   int choice = 0; 
   dialogue1();
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
    
   ManInteractionTwo();
}
void ManInteractionTwo()
{
   int choice = 0; 
   dialogue2();
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
    
   ManInteractionThree();
}
void ManInteractionThree()
{
   int choice = 0; 
   dialogue3();
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
    
   ManInteractionFour();
}
void ManInteractionFour()
{
   int choice = 0; 
   dialogue4();
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
    
   ManInteractionFive();
}
void ManInteractionFive()
{
   int choice = 0; 
   dialogue5();
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

// Woman Interactions
void WomanInteractionOne()
{
   int choice = 0; 
   dialogue1();
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
   dialogue2();
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
   dialogue3();
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
   dialogue4();
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
   dialogue5();
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

void approach()
{
   int choice = 0; 
   cout<<"You see two people sitting at Woo Cafe..."<<endl;
   cout<<"You choose to approach... ";
    
   cin>>choice; 
   while(choice != 1 && choice != 2 && choice != 3)
   {
      cin.clear();
	   cin.ignore(INT_MAX, '\n');
	   cout<<"Error. Try again: ";
	   cin>>choice;
   }
   while(choice == 3)
   {
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

int main()
{
   introduction();
   approach();

   return 0;
}





