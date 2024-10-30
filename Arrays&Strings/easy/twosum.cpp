#include <iostream>
using namespace std;

int main(){
  cout<<"Enter the sum value"<<endl;
  int sum;
  cin>>sum;
  int[5] arr = {1,2,4,5,6};
  //Hash Map method:
  unordered_map<int, int> numMap;
  for (int i = 0; i < arr.size(); i++) {
        int complement = sum - arr[i];
        if (numMap.count(complement)) {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }
}
