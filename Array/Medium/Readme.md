# Array Problems – Medium Level

This folder contains solutions to intermediate array manipulation problems. These problems build upon fundamental concepts and introduce more advanced techniques commonly asked in coding interviews.

## Problems Solved

### 1. Two Sum Problem
**File:** `2Sum Problem.cpp`

**Problem:** Find two numbers in an array that add up to a given target and return their indices.

**Approach:**
- Use a hash map to store elements and their indices while traversing the array
- For each element, calculate its complement (target − current element)
- Check if the complement exists in the map
- If found, return the indices
- Time Complexity: O(n)
- Space Complexity: O(n)

**Example:**
```

Input: arr = [2, 6, 5, 8, 11], target = 14
Output: [1, 3]

```

**Key Insight:** Hashing reduces the time complexity from O(n²) to O(n).

### 2. Sort Array of 0s, 1s, and 2s (Dutch National Flag Problem)
**File:** `sort_0_1_2_ofarray.cpp`

**Problem:** Sort an array containing only 0s, 1s, and 2s without using extra space.

**Approach:**
- Use the Dutch National Flag algorithm
- Maintain three pointers: `low`, `mid`, and `high`
- Place 0s to the left, 2s to the right, and 1s in the middle
- Time Complexity: O(n)
- Space Complexity: O(1)

**Example:**
```

Input: [2, 0, 2, 1, 1, 0]
Output: [0, 0, 1, 1, 2, 2]

```

**Key Insight:** Three-pointer technique enables single-pass in-place sorting.

### 3. Kadane’s Algorithm (Maximum Subarray Sum)
**File:** `Kadane's_Algorithm.cpp`

**Problem:** Find the maximum sum of a contiguous subarray in a given integer array.

**Approach:**
- Use Kadane’s Algorithm
- Maintain a running sum and a maximum sum
- Update maximum whenever the running sum is greater
- Reset running sum if it becomes negative
- Time Complexity: O(n)
- Space Complexity: O(1)

**Example:**
```

Input: [-2, 1, -3, 4, -1, 2, 1, -5, 4]
Output: 6

```

**Key Insight:** Dynamic programming avoids checking all subarrays.

### 4. Kadane’s Algorithm – Follow Up (All Negative Case)
**File:** `Kadane's_Algorithm_followUP.cpp`

**Problem:** Find the maximum subarray sum when all elements are negative.

**Approach:**
- Modify Kadane’s Algorithm to handle all-negative arrays
- Initialize maximum sum with the first element
- Compare each element carefully
- Time Complexity: O(n)
- Space Complexity: O(1)

**Example:**
```

Input: [-8, -3, -6, -2, -5, -4]
Output: -2

```

**Key Insight:** Proper initialization ensures correctness in edge cases.

### 5. Majority Element (Moore’s Voting Algorithm)
**File:** `Majority_Element.cpp`

**Problem:** Find the element that appears more than n/2 times in the array.

**Approach:**
- Use Moore’s Voting Algorithm
- Maintain a candidate and a counter
- Increment or decrement counter based on current element
- Time Complexity: O(n)
- Space Complexity: O(1)

**Example:**
```

Input: [2, 2, 1, 1, 1, 2, 2]
Output: 2

````

**Key Insight:** Pairwise cancellation guarantees the majority element.

## Key Concepts Practiced
- Hash Map Technique
- Two-Pointer / Three-Pointer Technique
- Dynamic Programming
- Greedy Algorithms
- In-place Array Manipulation
- Space–Time Tradeoff

## How to Run

```bash
g++ -std=c++17 filename.cpp -o output
./output
````

Example:

```bash
g++ -std=c++17 "2Sum Problem.cpp" -o twosum
./twosum
```

## Learning Outcomes

* Efficiently solve array-based interview problems
* Apply optimized algorithms over brute force
* Handle edge cases correctly
* Improve problem-solving and logical thinking

**Author:** B Rohit Kumar
**CSE Student**
**Happy Coding!** 🚀
