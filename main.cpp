#include <algorithm>
#include <iostream>
#include <vector>
#include <set>

bool containsIntegersToAddUp(std::vector<int> listOfInts, int k) {

    std::sort(listOfInts.begin(), listOfInts.end());
    std::set<int> secondTerms;

    for (int number : listOfInts) {
        if (secondTerms.find(number) != secondTerms.end()) {
            return true;
            break;
        }

        secondTerms.emplace(k - number);
    }

    return false;
}

int main() {
    
    std::vector<int> v { 12, 4, 10, 7, 11};

    std::cout << "Contains: " << containsIntegersToAddUp(v, 18) << "\n";
    std::cout << "Contains: " << containsIntegersToAddUp(v, 2) << "\n";
    std::cout << "Contains: " << containsIntegersToAddUp(v, 23) << "\n";
    std::cout << "Contains: " << containsIntegersToAddUp(v, 24) << "\n";

    return 0;
}