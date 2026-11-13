#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(45);
    vec.push_back(65);
    vec.push_back(75);

    cout<<"After pushing"<<vec.size()<<endl;

    vec.pop_back();
    cout<<vec.size()<<endl;

    cout<<vec.at(1);

}
