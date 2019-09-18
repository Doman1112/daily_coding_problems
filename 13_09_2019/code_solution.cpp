#include "code_solution.h"

#include <algorithm>
#include <set>

/**
 * Given a list of numbers and a number \p k, returns whether any 
 * two numbers from the list add up to \p k.
 * 
 * @param[in] listOfNumbers List of numbers.
 * @param[in] k             Number to test.
 * @return true if we found two numbers that add up to \p - false otherwise
 */
extern bool containsIntegersToAddUp(std::vector<int> listOfNumbers, const int k) {

    // Sort the list first.
    std::sort(listOfNumbers.begin(), listOfNumbers.end());

    // A set of second terms - these are the terms we're gonna be looking for 
    // while we iterate over list of numbers.
    std::set<int> secondTerms;

    for (int number : listOfNumbers) {
        if (secondTerms.find(number) != secondTerms.end()) {
            return true;
            break;
        }

        secondTerms.emplace(k - number);
    }

    return false;
}
