#include <vector>
#include <map>

using namespace std;

int solution(vector<int> nums)
{
    map<int, int> hash;
    int answer = 0;
    
    for(int i = 0; i<nums.size(); i++){
        hash.insert({nums[i], i});
    }
    
    answer = hash.size();
    if(hash.size() > nums.size() / 2){
        answer = nums.size() / 2;
    }
    return answer;
}
