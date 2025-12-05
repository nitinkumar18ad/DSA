#include <iostream>
using namespace std;

int main() {
    int day;
    cout<<"enter day: ";
    cin>>day;

   switch (day)
   {
   case 1:cout<<"Monday";break;
   case 2:cout<<"Tuesday";break;
   case 3:cout<<"wednesday";break;

   default: cout<<"Invalid";break;
   }

    return 0;

};