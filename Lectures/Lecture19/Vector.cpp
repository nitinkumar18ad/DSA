#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,1);
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" "<<endl;
    }
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"Size "<<v.size()<<endl;

    cout<<"Element at 2nd index "<<v.at(2)<<endl;
    cout<<"First element "<<v.front()<<endl;
    cout<<"Last element "<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<endl;
    }

    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<endl;
    }

    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;

}