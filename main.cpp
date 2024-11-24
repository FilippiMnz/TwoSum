#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
    vector<int> TwoSum(vector<int> & nums, int target){
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1;j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main(){
    Solution Sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 10;

    vector<int> result = Sol.TwoSum(nums, target);

    if(!result.empty()){
        cout << "Encontrados " << result[0]  << " e " << result[1] << endl;
    }else{
        cout << "Nada encontrado" << endl;
    }
    return 0;
}
