#include<iostream>
#include<map>

using namespace std;
int main(){
    map <int,string> m;

    m[1]="Nitin";
    m[5]="Kumar";
    m[7]="Yadav";

    m.insert({11,"c++"});

    cout<<"Before Erasing"<<endl;
    for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 3:"<<m.count(3)<<endl;

    cout<<"After Erasing"<<endl;
    m.erase(7);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
        }

    auto it =m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}