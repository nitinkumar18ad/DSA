#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string>q;

    q.push("Nitin");
    q.push("Kumar");
    q.push("Yadav");

    cout<<"size before pop "<<q.size()<<endl;

    cout<<"First Element "<<q.front()<<endl;
    q.pop();
    cout<<"First Element "<<q.front()<<endl;
    cout<<"size after pop "<<q.size()<<endl;
}