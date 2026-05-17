#include<iostream>
using namespace std;

class Human {
    public:
        int weight;
        int age;
        int height;

    public:
    int getAge() {
        return this -> age;
    }
    void setWeight(int w){
        this -> weight = w;
    }
};

class Male: public Human {
    public:
        string colour;

        void sleep() {
            cout<<"Male Sleeping"<<endl;
        }
};

int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.colour<<endl;

    object1.setWeight(84);
    cout<<object1.weight<<endl;
    object1.sleep();



    return 0;
}