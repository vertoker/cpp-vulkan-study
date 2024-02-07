//
// Created by vertog on 07.02.2024.
//

#include "Solution2.h"
#include "string"
#include "iostream"

// Useful struct for data bind of substr
struct SubStr {
public:
    int start;
    int length;

    // I decide do not use constructor
    // you can may do anything another
    void reset(int newStart, int newLength) {
        start = newStart;
        length = newLength;
    }

    // We get new potential biggest substr
    // and try to increase current
    void tryIncreaseLength(const SubStr& next) {
        if (next.length > length) {
            length = next.length;
            start = next.start;
        }
    }

    // convert to substr over real string
    std::string getSubStr(const std::string& source) {
        std::string subString { source.substr(start, length) };
        return subString;
    }
};

class Solution {
// For better explanation I put all method data
// in class as parameters
// Do not put like that data, just use only in 1 method
// or add some reset or constructor/desctuctor
private:
    // represents 2 substrings without actually substrings
    SubStr result;
    SubStr next;

    // length of current string
    int length;
    // pointers to the current check substr
    int startIndex;
    int endIndex;

    // universal method for odd and even checking
    void checkPalyndromeCurrent(const std::string& s) {
        while (s[startIndex] == s[endIndex]) {
            // increase cached value
            next.reset(startIndex, next.length + 2);

            // increase indexes to the next
            startIndex--;
            endIndex++;

            // when we on the bounds of string we end checking
            if (startIndex < 0 || endIndex >= length)
                break;
        }
    }

    // These both methods are for initializing even or odd checking
    void tryIncreaseEven(const std::string& s, int i) {
        startIndex = i - 1;
        endIndex = i;
        next.length = 0;

        checkPalyndromeCurrent(s);
        result.tryIncreaseLength(next);
    }
    void tryIncreaseOdd(const std::string& s, int i) {
        startIndex = i - 1;
        endIndex = i + 1;
        next.length = 1;

        checkPalyndromeCurrent(s);
        result.tryIncreaseLength(next);
    }

public:
    std::string longestPalindrome(std::string s) {
        length = s.size();
        if (length == 1) return s;

        result.reset(0, 1);
        next.reset(0, 0);

        startIndex = 0;
        endIndex = 0;

        // I starts with 1, because s[0] now
        // is a biggest palyndrome
        for (int i = 1; i < length; i++) {
            // check starts with s[0] and s[1] and so on
            tryIncreaseEven(s, i);
            // check starts with s[0] and s[2] and so on
            tryIncreaseOdd(s, i);
        }

        return result.getSubStr(s);
    }
};

void SolutionDebugger2::main() {
    Solution solution { };

    std::cout << solution.longestPalindrome("aboba") << std::endl;
    std::cout << solution.longestPalindrome("babb") << std::endl;
    std::cout << solution.longestPalindrome("bb") << std::endl;
    std::cout << solution.longestPalindrome("aaaa") << std::endl;
}
// leetcode 5