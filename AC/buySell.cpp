#include<iostream>
using namespace std;

int buySell(int prices[]){
    int bb = prices[0],mp = 0,n = 6;

    for(int i = 1;i<n;i++){
        if(prices[i]>bb){

            mp = max(mp,prices[i]-bb);
        }
        bb = min(bb,prices[i]);
    }
    return mp;
}

int main(){
int prices[]  = {7,1,3,2,6};
int size = 5;

cout<<buySell(prices);

return 0;
}