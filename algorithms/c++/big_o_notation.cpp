#include <iostream>
#include <vector>

// O(1) - Constant Time Complexity 

int getFirstElement(const std::vector<int>& vec) {
    if(!vec.empty()) return vec[0];
return -1;
}

// O(n) - Linear Time

int computeSum(const std::vector<int>& vec) {
    int sum = 0;

    for (int num : vec) {

        sum += num;
    }

    return sum;
}

// O(n²) - Bubble sort

void printPairs(const std::vector<int>& vec) { 

    for (size_t i = 0; i < vec.size(); ++i) {

        for (size_t j = 0; j < vec.size(); ++j) 
            {
                std::cout << "(" << vec[i] << ", " << vec[j] << ")" << std::endl;
            }
    }
}

// O(log n) - Logarythmic Time Complexity = Binary Search

int binarySearch(const std::vector<int>& vec, int target) {

    int low = 0, high = vec.size() - 1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if(vec[mid] == target) return mid;

        if(vec[mid] < target) low = mid + 1;

        else high = mid - 1;
    }

    return -1;
}

// O(n!) - Factorial

void printPermutations(std::string str, int start, int end) {

    if(start == end) {

        std::cout << str << std::endl;

        return;
    }

    for(int i = start; i <= end; i++) {

        std::swap(str[start], str[i]);

        printPermutations(str, start + 1, end);

        std::swap(str[start], str[i]);
    }
}



int main() {
    std::vector<int> numbers = {2, 6, 3, 15, 9};

    int result = getFirstElement(numbers);
    int sum1 = computeSum(numbers);
    printPairs(numbers);

    int target1 = binarySearch(numbers, 3);

    printPermutations("revolution", 5, 7);



std::cout << "The first element is: " << result << std::endl;
std::cout << "The sum is: " << sum1 << std::endl;
std::cout << "The target is: " << target1 << std::endl;


}


