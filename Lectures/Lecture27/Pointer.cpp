#include<iostream>
using namespace std;

void update(int **p2){
// p2 = p2 + 1;
// No Change 

// *p2 = *p2 +1;
// Changes

**p2 = **p2 + 1;
//Changes  
}

int main(){

    int i = 5;
    int *p = &i;
    int **p2 = &p;

   /*

    cout << endl;
    cout << "before "<< i << endl;
    cout << "before "<< p << endl;
    cout << "before "<< p2 << endl;
    update(p2);
    cout << "after  "<< i << endl;
    cout << "after  "<< p << endl;
    cout << "after  "<< p2 << endl;
    cout << endl;
    */
    

    //Q-1
    /*
    int  first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout << first <<" "<< second << endl;

    //Q-2
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first << endl;

    //Q-3
    int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";
    cout<< first <<endl;

    //Q-4
    int *p = 0;
    int first = 110;
    *p = first;
    cout << *p << endl;

    // q-5 
    int first = 8;
    int second = 11;
    int *third = &second ;
    first = *third;
    *third = *third + 2 ;
    cout << first << " "<< second << endl;

    Q-6
    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " "<< f << " "<< p << endl;

    Q-7
    int arr [5];
    int *ptr;
    cout << sizeof(arr) << " "<< sizeof(ptr) << endl;

    Q-8
    int arr[] = {11, 21 , 13, 14};
    cout << *(arr) << " " << *(arr+1) << endl;

    Q-9
    int arr[6] = {11, 12,13}
    cout<< arr << " " << &arr << endl;

    Q-10
    int arr[6] = { 11,21,13};
    cout << (arr + 1) << endl;

    Q-11
    int arr[6] = {11 ,21, 31};
    int *p = arr;
    cout << p[2] << endl;

    Q-12
    int arr[]  = {11,12,13,14,15};
    cout << *(arr) << " " << *(arr+3); 

    Q-13
    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++;
    cout << *ptr << endl;

    Q-14
    char ch = 'a';
    char *ptr = &ch;
    ch++;
    cout << *ptr << endl;
    
    Q-15
    char arr[]  = "abcde";
    char *p = &arr[0];
    cout << p << endl;

    Q-16
    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout << p <<endl;

    Q-17
    char str[]= "babbar";
    char *p = str;
    cout << str[0] << " " << p[0] << endl;

    Q-18
    void update(int *p){
    *p = (*p) * 2;
    }

    int main(){
    int i = 10;
    update(&i);
    cout << i << endl;
    }

    Q-19
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl;

    Q-20
    int first = 100;
    int *p = &first ;
    int **q = &p;
    int second = ++(**q);
    int *r =  *q;
    ++(*r);
    cout << first << " " << second << endl; 


    */

    return 0;
}