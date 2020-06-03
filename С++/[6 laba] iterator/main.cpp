#include <iostream>
#include <vector>
#include <algorithm>
#include "catswill.h"
#include "MyFunctor.h"


int main() {
    Equal<int> f;
    EvenNum<int> e;

    std::vector<int> nums = {1, 2, 3, 3, 2, 1};
    std::cout << catswill::is_palindrome(nums.begin(), nums.end(), f) << '\n';

    std::vector<int> even = {2,4,6,8};
    std::vector<int> odd = {1,3,5,7};
    std::cout << catswill::all_of(even.begin(), even.end(), EvenNum<int>(e)) << '\n';
    std::cout << catswill::all_of(odd.begin(), odd.end(), EvenNum<int>(e)) << '\n';

    std::vector<int> nums2 {1337, 15, 834, 100500};
    std::cout << catswill::is_sorted(nums2.begin(), nums2.end(), [](int a, int b){return a < b;}) << '\n';
    std::sort(nums2.begin(), nums2.end());
    std::cout << catswill::is_sorted(nums2.begin(), nums2.end(), [](int a, int b){return a < b;}) << '\n';
}
