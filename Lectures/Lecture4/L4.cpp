#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;

// }

//output
// 1 2 3
// 1 2 3
// 1 2 3


// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     int value=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<value<<" ";
//             value=value +1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

//output
// 1 2 3
// 4 5 6
// 7 8 9


//Q01
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     int value = n*n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<(value)<<" ";
//             value = value-1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;

// }

// output
// 9 8 7
// 6 5 4
// 3 2 1


//Q02
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"*"<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

// output
// *
// * *
// * * *


//Q03
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

// output
// 1
// 2 2
// 3 3 3


//Q04
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     int value=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<value<<" ";
//             value = value+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

// output
// 1
// 2 3
// 4 5 6


//Q05
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     int value;
//     while(i<=n){
//         int j=1;
//         value=i;
//         while(j<=i){
//             cout<<value<<" ";
//             value = value+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

// output
// 1
// 2 3
// 3 4 5
// 4 5 6 7


//Q05
// Same as above but without using extra variable
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i+j-1<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

//output
//1
//2 3
//3 4 5
//4 5 6 7


//Q06
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<i-j+1<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }


// Output
// 1
// 2 1
// 3 2 1
// 4 3 2 1


//Q07
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
        
//         while(j<=n){
//             cout<<(char)(65+i-1)<<" ";
        
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

//output
// A A A
// B B B
// C C C


//Q08
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         char value = 'A';
//         while(j<=n){
//             cout<<value <<" ";
//             value=value+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

//output
// A B C 
// A B C 
// A B C 


//Q09
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     char value='A';
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<value<<" ";
//             value=value +1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;

// }

//output
// A B C
// D E F
// G H I


//Q10
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char value='A'+i+j-2;
//             cout<<value<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

//output
// A B C
// B C D
// C D E

//Q11
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     while (i<=n){
//         int j=1;
//         char value='A'+i-1;
//         while(j<=i){
//             cout<<value<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
//     return 0;
// }

//Output
//A
//B B
//C C C


//Q12
// int main(){
//     int n;
//     cin>>n;

//     int i=1;
//     char value='A';
//     while (i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<value<<" ";
//             value=value+1;
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;

//     }
//     return 0;
// }

//output
//A
//B C
//D E F


//Q13
// int main(){
//     int n;
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         char ch ='A'+i-1;
//         int j=1;
//         while(j<=i){
//             cout  << ch << " ";
//             ch = ch + 1;
//             j = j+1;
//         }
//         i = i+1;
//         cout<< endl;
//     }
//     return 0;
// }

//output
// 4
// A 
// B C 
// C D E 
// D E F G 

//Q14
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i <=n) {
//         char ch ='A'+ n - i;
//         int j = 1;
//         while(j <= i){
//             cout  << ch << " ";
//             ch = ch + 1;
//             j = j + 1;
//         }
//         i = i + 1;
//         cout<< endl;
//     }
//     return 0;
// }

// output
// 4
// D 
// C D
// B C D
// A B C D

//Q15
// int main(){
//     int n;
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         int space = 1;
//         while(space <= n-i){
//             cout << " ";
//             space= space +1;
//         }
//         int j = 1;
//         while(j<=i){
//             cout <<"*";
//             j=j+1;
//         }
//         i = i +1;
//         cout << endl;
//     }
//     return 0;
// }

// output
// 4
//    *
//   **
//  ***
// ****

//Q16
// int main(){
//     int n;
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         int j = 1;
//         while(j <= n-i+1){
//             cout << "* ";
//             j= j +1;
//         }
//         i = i +1;
//         cout << endl;
//     }
//     return 0;
// }

// output
// 4
// * * * * 
// * * *
// * *
// *

//Q17
// int main(){
//     int n;
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         int j = 1,space=1;
//         while(space< i){
//             cout << " ";
//             space= space +1;
//         }
//         while(j<=n-i+1){
//             cout <<"*";
//         j = j +1;
       
//     }
//     i = i+1;
//      cout << endl;
//     }
//     return 0;
// }

// output
// 4
// ****
//  ***
//   **
//    *

//Q18
// int main(){
//     int n;
//     cin >> n;
//     int i=1;
//     char a=1;
//     while(i<=n){
//         int j = 1,space=1;
//         while(space< i){
//             cout << " ";
//             space= space +1;
//         }
//         while(j<=n-i+1){
//             cout << i;
//         j = j +1;
       
//     }
//     i = i+1;
//      cout << endl;
//     }
//     return 0;
// }

// output
// 4
// 1111
//  222
//   33
//    4


//Q19
// int main(){
//     int n;
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         int space = 1;
//         while(space <= n-i){
//             cout << " ";
//             space= space +1;
//         }
//         int j = 1;
//         while(j<=i){
//             cout <<i;
//             j=j+1;
//         }
//         i = i +1;
//         cout << endl;
//     }
//     return 0;
// }

// output
// 4
//    1
//   22
//  333
// 4444


//Q20
// int main(){
//     int n;
//     cin >> n;
//     int i= 1,num= 1;
//     while(i<=n){
//         int j=1,space = 1;
//         while(space <= n-i){
//             cout << " ";
//             space = space + 1;
//         }
//         while(j <=i){
//             cout << num << "";
//             num = num + 1;
//             j = j + 1;
//         }
//         i = i + 1;
//         cout << endl;
//     }
//     return 0;
// }
// output
// 4
//    1
//   23
//  456
// 78910

//Q21
// int main(){
//     int n;
//     cin >> n;
//     int i= 1;
//     while(i<=n){
//         int j=1,space = 1;
//         while(space <= n-i){
//             cout << " ";
//             space = space + 1;
//         }
//         while(j <=i){
//             cout << j << "";
//             j = j + 1;
//         }
//         j = i - 1;
//         while(j >=1){
//             cout << j << "";
//             j = j - 1;
//         }
//         i=i + 1;
//         cout << endl;
//     }
//     return 0;
// }

// output
// 4
//    1
//   121
//  12321
// 1234321