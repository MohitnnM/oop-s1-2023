#ifndef EQUIVALENCETESTS_H
#define EQUIVALENCETESTS_H

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        // Add other tests here
    }

private:
    void testPositiveIntegers() {
        Addition addition1;
        if (addition1.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition1;
        if (addition1.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
    }

    // Add other test functions here
};

#endif