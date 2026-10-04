#pragma once

#include <iostream>

namespace BoronTest {
    #define EXPECTVALUE(p_value, p_expectedValue) \
        do { \
            if ((p_value) != (p_expectedValue)) { \
                std::cout << "UNEXPECTED VALUE: Value: " << p_value << ", expected: " << p_expectedValue << '\n'; \
            } \
        } while (false)

    #define EXPECTTRUE(p_value) \
        do { \
            if ((!p_value)) { \
                std::cout << "UNEXPECTED VALUE: Value: false" << ", expected: true" << '\n'; \
            } \
        } while (false)

    #define EXPECTFALSE(p_value) \
        do { \
            if ((p_value)) { \
                std::cout << "UNEXPECTED VALUE: Value: true" << ", expected: false" << '\n'; \
            } \
        } while (false)

    #define EXPECTNEAR(p_value, p_expected, p_tolerance) \
        do { \
            if (abs(p_value - p_expected) > p_tolerance) { \
                std::cout << "Not near, Value: " << p_value << ", Expected: " << p_expected << ", Tolerance: " << p_tolerance << '\n'; \
            } \
        } while (false)
}