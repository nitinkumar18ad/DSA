#include<iostream>
using namespace std;
int main()
{
    // char n;
    // cin>>n;
    // if(n>='A'&& n<='Z'){
    //     cout<<"This is upper case"<<endl;
    // }
    // else if(n>='a' && n<='z'){
    //     cout<<"This is lower case"<<endl;
    // }
    // else if(n>='0' && n<='9') {
    //     cout<<"This is numeric"<<endl;
    // }



//Sum of all even numbers
// int n;
// cin >> n;
// int sum = 0;
// int i = 2;

// while(i <= n) {
// if(i % 2==0)
//     sum = sum+i;
//     i = i+1;
// }
// cout << "sum from " << 1 << " to "<< n <<" = "<<sum<<endl;
// return 0;


//Farenheit to celsius
float fahrenheit;
cin >> fahrenheit;
float celsius = (5.0/9)*(fahrenheit-32);
cout << fahrenheit << " F "<<celsius<<" C "<< endl;
return 0;

}
