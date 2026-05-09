#include<iostream>
// #include "Hero.cpp"
using namespace std;

class Hero {

    //Properties
    private:
    int health;
    public:
    char level;


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

    Hero ramesh;
    cout<<"health:"<< ramesh.getHealth() <<endl;
    ramesh.setHealth(90);
    ramesh.level = 'A';
    cout<<"Size:"<<sizeof(ramesh)<<endl;

    cout<<"Health is:"<< ramesh.getHealth() << endl;
    cout<<"Level is:"<< ramesh.level << endl;


}