//
// Created by vertog on 05.02.2024.
//
#include "vector"
#include "iostream"
#include "Solution.h"
#include "algorithm"

class QuadrupletsChecker {
private:
    std::vector<int> cache;

public:
    QuadrupletsChecker() {
        std::vector<int> temp (4, 0);
        cache = temp;
    }


    bool unique_check(std::vector<std::vector<int>>& container, int num1, int num2, int num3, int num4) {
        std::vector<int> copy = copy_cache();
        int counter = 0;

        for (auto quadruplets : container) {
            for (auto i = 0; i < 4; i++) {
                auto ptr = std::find(copy.begin(), copy.end(), quadruplets[i]);
                if (ptr != cache.end()) {
                    copy.erase(ptr);
                    counter++;
                }
            }

            copy.clear();


            if (counter == 4) {
                return false;
            }
            counter = 0;
        }

        return true;
    }

    bool check(const int& target, const int& num1, const int& num2, const int& num3, const int& num4) {
        if (num1 + num2 + num3 + num4 == target) {
            cache[0] = num1;
            cache[1] = num2;
            cache[2] = num3;
            cache[3] = num4;
            return true;
        }
        return false;
    }

    std::vector<int> copy_cache() {
        std::vector<int> copy;
        copy.reserve(4);
        for (auto num : cache) {
            copy.push_back(num);
        }
        return copy;
    }
};

class QuadripletContainer {
private:
    std::vector<std::vector<int>> container;
    QuadrupletsChecker checker;

    void try_add(int target, int num1, int num2, int num3, int num4) {

        if (checker.check(target, num1, num2, num3, num4)) {
            container.push_back(checker.copy_cache());
            std::cout << target << std::endl;
            std::cout << num1 << std::endl;
            std::cout << num2 << std::endl;
            std::cout << num3 << std::endl;
            std::cout << num4 << std::endl;
            std::cout << std::endl;
        }
    }

    bool equals(std::vector<int> a, std::vector<int> b) {
        return a[0] == b[0] && a[1] == b[1] && a[2] == b[2] && a[3] == b[3];
    }

public:
    std::vector<std::vector<int>> get_container() { return container; }

    void generate(std::vector<int>& nums, int target) {
        int length = nums.size();
        for (int i1 = 0; i1 < length; i1++)
            for (int i2 = i1; i2 < length; i2++)
                for (int i3 = i2; i3 < length; i3++)
                    for (int i4 = i3; i4 < length; i4++)
                        try_add(target, nums[i1], nums[i2], nums[i3], nums[i4]);

        if (length > 1 && equals(container[--length], container[--length])) {
            container.erase(container.begin() + length);
        }
    }

    void clear() {
        container.clear();
    }
};

class Solution {
public:
    std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
        QuadripletContainer container { };
        container.generate(nums, target);
        return container.get_container();
    }
};

void SolutionDebugger::main() {
    std::vector<int> v1 { 2, 2, 2, 2, 2 };
    std::vector<int> v2 { -3, -2, -1, 0,  };
    Solution solution { };

    auto r1 = solution.fourSum(v1, 8);
    auto r2 = solution.fourSum(v2, 0);

    std::cout << "v1" << std::endl;
}
// leetcode 18