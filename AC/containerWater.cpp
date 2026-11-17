#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxArea(vector<int> height){
    int maxWater = 0;

    //BruteForce
    // for(int i =0;i<height.size();i++){
    //     for(int j = i+1;j<height.size();j++){
    //         int width = j -i;
    //         int currentHeight = min(height[i],height[j]);
    //         int currWater = width*currentHeight;

    //         maxWater = max(maxWater,currWater);
    //     }
    // }

    //Opitmal
    int lp = 0,rp = height.size()-1;

    while(lp<rp){
        int ht = min(height[lp],height[rp]);
        int wd = rp - lp;
        int currWater = ht * rp;
        maxWater = max(currWater,maxWater);

        height[lp] < height[rp] ? lp++ : rp--;

    }

    return maxWater;
}

int main(){
    vector<int>height = {2,5,4,8,7};

    cout<<maxArea(height);

    return 0;
}

