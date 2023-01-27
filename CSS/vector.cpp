#include<iostream>
#include <vector>
using namespace std ;

int main(){
    vector<int>nums ;
    nums.at(1) = 1 ;
    nums.at(0) = 0 ; 
    cout<<sizeof(nums) ;
}