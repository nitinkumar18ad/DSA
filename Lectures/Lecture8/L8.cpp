#include <iostream>
using namespace std;
// int main() {
// char ch=2;
// int num = 1;

// switch(ch){
//     case 1:cout<<"first"<<endl;
//             break;
//     case 2:switch(num){
//         case 1:cout<<"2"<<endl;
//     }
//             break;
//     default:cout<<"default"<<endl;
//     }
// }

// Calculator
//  int main(){
//      int a,b;
//      cout<<"Enter value of a:";
//      cin>>a;
//      cout<<"Enter value of b:";
//      cin>>b;

//     char op;
//     cout <<"Enter operator"<<endl;
//     cin>>op;

//     switch (op){
//         case '+': cout<<(a+b)<<endl;
//             break;

//          case '-': cout<<(a-b)<<endl;
//             break;

//          case '*': cout<<(a*b)<<endl;
//             break;

//          case '/': cout<<(a/b)<<endl;
//             break;

//          case '%': cout<<(a%b)<<endl;
//             break;

//         default :cout<<"choose a valid operator"<<endl;
//     }
// }



// Functions
// Pow(a,b)
//  int power( int a,int b){
//      int ans=1;
//      for(int i=1;i<=b;i++){
//          ans=ans*a;
//      }
//      return ans;

//     }

//     int main(){
//         int a,b;
//         cin>>a >>b;
//         int answer = power (a,b);
//         cout<<"Answer is "<<answer<<endl;
//     }

// Even Odd
//  bool isEven(int a){
//      if(a&1){
//          return 0;
//          }
//          return 1;
//  }
//  int main(){
//      int num;
//      cin>>num;

//     if (isEven(num)){
//         cout<<"Number is even"<<endl;
//     }
//     else{
//         cout<<"Number is Odd"<<endl;
//     }
// }

// nCr
//  int fact(int n){
//  int fact=1;
//  for(int i=1;i<=n;i++){
//      fact=fact*i;
//  }
//  return fact;
//  }

// int nCr(int n,int r){
//     int num= fact(n);
//     int deno=fact(r)*fact(n-r);
//     return num/deno;
// }

// int main(){
//     int n,r;
//     cout<<"Enter the value of a and b:";
//     cin >> n >> r;
//     cout<<"Answer is "<< nCr(n,r)<<endl;
//     return 0;
// }

// Print Counting
//  void printCounting(int n){
//      for(int i=1;i<=n;i++){
//          cout <<i<<" ";
//      }

// }
// int main(){
//     int n;
//     cout <<"Enter the value of n"<<endl;
//     cin>>n;
//     printCounting(n);
//     return 0;
// }

// isPrime
// 1->Prime No
// 2->Not a prime
//  bool isPrime(int n){
//      for (int i =2;i<n;i++){
//      if(n%i ==0){
//          return 0;
//      }
//      return 1;
//      }
//  }
//  int main(){
//      int n;
//      cout<<"enter a no."<<endl;
//      cin>>n;

//    if(isPrime(n)){
//         cout <<"is Prime"<<endl;
//     }
//     else  cout<<"Not Prime";
// }

// void dummy(int n){
//     n++;
//     cout << "n is "<<n<<endl;

// }
// int main(){
//     int n;
//     cin>>n;

//     dummy(n);
//     cout<<"Number n is "<<n<<endl;
//     return 0;
// }
