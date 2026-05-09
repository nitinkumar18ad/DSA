#include<iostream>
// #include "Hero.cpp"
using namespace std;

class Hero {

    //Properties
    private:
    int health;
    public:
    char level;

    Hero(){
        cout<<"Constructor Called"<<endl;
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

};

int main(){

    //Object Created Statistically
    Hero ramesh(10);
    // cout<< "Address of ramesh "<< &ramesh<<endl;
    // ramesh.getHealth(); 

    //Dynamically
    Hero *h = new Hero();

    Hero(69,'B');



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