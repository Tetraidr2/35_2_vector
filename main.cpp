#include <iostream>
#include <vector>
#include <unordered_set>
#include <memory>

int main() {
    std::vector<int> vector  = {1,0,3,4,5,6,5,8,9,0};
    auto uniqueValues = [vector](){
        auto newVector = std::unique_ptr<std::vector<int>>(new std::vector<int>);
        std::unordered_set<int> unset;
        for(int i : vector){
            if(!(unset.count(i))){
                unset.insert(i);
                newVector->push_back(i);
            }
        }
        return newVector;
    };
    auto vec = *uniqueValues();
    /*
    for(auto it = vec.begin(); it!= vec.end(); it++){
        std::cout<< *it << " ";
    }
     */


    return 0;
}
