#include <iostream>
#include "results.h"
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
};

void ManInteractionOne(MainCharacter player);
void ManInteractionTwo(MainCharacter player);
void ManInteractionThree(MainCharacter player);
void ManInteractionFour(MainCharacter player);
void ManInteractionFive(MainCharacter player);

void WomanInteractionOne(MainCharacter player);
void WomanInteractionTwo(MainCharacter player);
void WomanInteractionThree(MainCharacter player);
void WomanInteractionFour(MainCharacter player);
void WomanInteractionFive(MainCharacter player);
