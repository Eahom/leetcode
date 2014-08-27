class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> vecRet;
        map<int, int> mapCandidate;
        map<int, int>::iterator itCandidate;
        
        for (int i = 0; i < numbers.size(); ++i) {
            itCandidate = mapCandidate.find(target - numbers[i]);
            if (itCandidate != mapCandidate.end()) {
                vecRet.push_back(itCandidate->second);
                vecRet.push_back(i + 1);
                
                return vecRet;
            }
            mapCandidate.insert(make_pair(numbers[i], i + 1));
        }
    }
};