#include<iostream>
using namespace std;

class Enemy {
    protected :
        int attackpower;
    public:
        void setAttack(int a)   {
            attackpower = a;
        }

};

class Ninja : public Enemy{
    public :
        void attack()   {
            cout<<"Ninja ,Chop ,Chop, Chop!  -"<<attackpower<<endl;


        }

};
class Monster   : public Enemy  {

      public :
        void attack()   {
            cout<<"Monster Eat you, Nom Nom Nom  -"<<attackpower<<endl;


        }
};

int  main() {

    Ninja n;

    Monster m;

    n.setAttack(10);
    n.attack();
    m.setAttack(25);
    m.attack();


}





