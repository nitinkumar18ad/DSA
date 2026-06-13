#include<iostream>
#include<vector>
#include<set>

using namespace std;

vector <int> Union(vector<int>& nums1, vector<int>& nums2){
    set<int>st;

    for(int i=1;i<nums1.size();i++){
        st.insert(i);
    }

    for(int x: nums2){
        st.insert(x);
    }

    vector<int> ans;

    for(int x: st){
        ans.push_back(x);
    }

    return ans;
}

int main(){
    vector<int> nums1 = {1,9,4,3,8};
    vector<int> nums2 = {2,6,6,8};

    vector<int> res = Union(nums1, nums2);

    for(size_t i = 0; i < res.size(); ++i) {
        if(i) cout << " ";
        cout << res[i];
    }
    cout << '\n';

    return 0;
}