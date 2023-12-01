#include <iostream>
<<<<<<< HEAD
#include "results.h"
=======
#include "Results.h"
>>>>>>> 06526a8a4a4e77f3f727a91026f73de15b71df64
using namespace std;

class Character
{
    public:
        string name;
        friend ostream& operator<<(ostream &os, const Character &mc)
        {
            os<<mc.name;
            return os;
        }
};
class MainCharacter : public Character
{
<<<<<<< HEAD
    private:
        int points = 0;
        int choices[5];
    public: 
        MainCharacter()
        {}
        ~MainCharacter()
        {
            ifstream fin("results.txt");
            printResults(fin, name, choices, points);
        }
        void setName()
        {
            cout<<"What's your name?: ";
            cin>>name;
        }
        string getName()
        {
            return name;
        }
        void setPoints(int p)
        {
            points += p;
        }
        int getPoints()
        {
            return points;
        }
        void setChoices(int c, int i)
        {
            choices[i] = c;
        }
        int* getChoices()
        {
            return choices;
        }
=======
   private:
      int points = 0;
      int choices[5];
   public: 
      MainCharacter()
      {}
      ~MainCharacter()
      {
          ifstream fin("Results.txt");
          printResults(fin, name, choices, points);
      }
      void setName()
      {
         cout<<"What's your name?: ";
         cin>>name;
      }
      void setPoints(int p)
      {
         points += p;
      }
      int getPoints()
      {
         return points;
      }
};
class Man : public Character
{
   public:
      Man()
      {
         name = "Justin Guy";
      }
};
class Woman : public Character
{
   public:
      Woman()
      {
         name = "Girlboss";
      }
>>>>>>> 06526a8a4a4e77f3f727a91026f73de15b71df64
};

void ManInteractionOne(MainCharacter* player);
void ManInteractionTwo(MainCharacter* player);
void ManInteractionThree(MainCharacter* player);
void ManInteractionFour(MainCharacter* player);
void ManInteractionFive(MainCharacter* player);

void WomanInteractionOne(MainCharacter* player);
void WomanInteractionTwo(MainCharacter* player);
void WomanInteractionThree(MainCharacter* player);
void WomanInteractionFour(MainCharacter* player);
void WomanInteractionFive(MainCharacter* player);
