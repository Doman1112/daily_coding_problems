#include <algorithm>
#include <iostream>
#include <vector>
#include <set>

/**
 * Given a list of numbers and a number \p k, returns whether any 
 * two numbers from the list add up to \p k.
 * 
 * @param[in] listOfInts    List of numbers.
 * @param[in] k             Number to test.
 * @return true if we found two numbers that add up to \p - false otherwise
 */
bool containsIntegersToAddUp(const std::vector<int>& listOfInts, const int k) {

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
    // Temporary dummy testing in main.
    // TODO Add googletest    
    std::vector<int> v { 12, 4, 10, 7, 11};

    std::cout << "Contains: " << containsIntegersToAddUp(v, 18) << "\n";
    std::cout << "Contains: " << containsIntegersToAddUp(v, 2) << "\n";
    std::cout << "Contains: " << containsIntegersToAddUp(v, 23) << "\n";
    std::cout << "Contains: " << containsIntegersToAddUp(v, 24) << "\n";

    return 0;
}