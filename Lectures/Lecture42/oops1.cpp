#include<iostream>
#include<cstring>
// #include "Hero.cpp"
using namespace std;

class Hero {

    //Properties
    private:
    int health;
    public:
    char *name;
    char level;


    //Simple/Default Constructor
    Hero(){
        cout<<"Simple/Default Constructor Called"<<endl;
        name = new char [100];
    }


    //Parametrized Constructor
    Hero(int health){
        cout<<"this ->"<< this <<endl;
        this -> health = health;
    }

    Hero(int health,char level){
        this -> level = level;
        this -> health = health;
    }


    //Copy constructor
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy (ch,temp.name);
        this -> name = ch;

        cout<<"Copy constructor called"<<endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print(){
        cout<<"[";
        cout<<"Name: "<< this->name<<",";
        cout<<"Health:"<< this->health<<",";
        cout<<"level:"<< this->level<<"]"<<endl;

    }


    int getHealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }

};

int main(){

    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    
    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();

    Hero hero2(hero1);
    hero2.print();

    hero1.name[0]= 'G';
    hero1.print();

    hero2.print(); 





    // Hero S(70,'C');
    // S.print();

    // //Copy Constructor
    // Hero R(S);
    // R.print();


    //Object Created Statistically
    // Hero ramesh(10);
    // // cout<< "Address of ramesh "<< &ramesh<<endl;
    // // ramesh.getHealth(); 

    // //Dynamically
    // Hero *h = new Hero();

    // Hero(69,'B');



    /*
    //Statica allocation
    Hero a;
    a.setHealth(80);
    a.setLevel('B');
    cout<< "level is "<<a.level <<endl;
    cout<<"health is "<<a.getHealth()<<endl;

    //Dynamic allocation
    Hero *b = new Hero;
    b->setHealth(71);
    b->setLevel('C');
    cout<< "level is "<<(*b).level <<endl;
    cout<<"health is "<<(*b).getHealth()<<endl;

    cout<< "level is "<< b -> level <<endl;
    cout<<"health is "<< b -> getHealth()<<endl;
    */

    // Hero ramesh;
    // cout<<"health:"<< ramesh.getHealth() <<endl;
    // ramesh.setHealth(90);

    // ramesh.level = 'A';

    // cout<<"Size:"<<sizeof(ramesh)<<endl;


    // cout<<"Health is:"<< ramesh.getHealth() << endl;
    // cout<<"Level is:"<< ramesh.level << endl;


}