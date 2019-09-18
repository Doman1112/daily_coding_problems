#include <vector>

#include "gtest/gtest.h"
#include "code_solution.h"

TEST(code_solution_1, code_solution_1) {
    std::vector<int> listOfNumbers = { 1, 2, 3, 4 };
    EXPECT_EQ(containsIntegersToAddUp(listOfNumbers, 7), true);

    EXPECT_EQ(containsIntegersToAddUp(listOfNumbers, 8), false);

    EXPECT_EQ(containsIntegersToAddUp(listOfNumbers, 0), false);
}
