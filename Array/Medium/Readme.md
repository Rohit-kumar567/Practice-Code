# Array Problems – Medium Level

This folder contains solutions to intermediate array manipulation problems commonly asked in coding interviews.

## Problems Solved

### 1. Two Sum Problem
**File:** `2Sum Problem.cpp`

Find two numbers in an array that add up to a given target.

- **Approach:** Hash map to store elements and check for complements
- **Time:** O(n) | **Space:** O(n)
- **Example:** `arr = [2, 6, 5, 8, 11], target = 14` → Output: `[1, 3]`

### 2. Sort Array of 0s, 1s, and 2s
**File:** `sort_0_1_2_ofarray.cpp`

Sort an array containing only 0s, 1s, and 2s in-place.

- **Approach:** Dutch National Flag algorithm with three pointers
- **Time:** O(n) | **Space:** O(1)
- **Example:** `[2, 0, 2, 1, 1, 0]` → `[0, 0, 1, 1, 2, 2]`

### 3. Kadane's Algorithm (Maximum Subarray Sum)
**File:** `Kadane's_Algorithm.cpp`

Find the maximum sum of a contiguous subarray.

- **Approach:** Dynamic programming with running sum
- **Time:** O(n) | **Space:** O(1)
- **Example:** `[-2, 1, -3, 4, -1, 2, 1, -5, 4]` → `6`

### 4. Kadane's Algorithm – All Negative Case
**File:** `Kadane's_Algorithm_followUP.cpp`

Handle maximum subarray sum when all elements are negative.

- **Approach:** Modified Kadane's with proper initialization
- **Time:** O(n) | **Space:** O(1)
- **Example:** `[-8, -3, -6, -2, -5, -4]` → `-2`

### 5. Majority Element
**File:** `Majority_Element.cpp`

Find the element appearing more than n/2 times.

- **Approach:** Moore's Voting Algorithm
- **Time:** O(n) | **Space:** O(1)
- **Example:** `[2, 2, 1, 1, 1, 2, 2]` → `2`

### 6. Stock Buy and Sell
**File:** `stock_buy_and_sell.cpp`

Find the maximum profit from buying and selling a stock once.

- **Approach:** Track minimum price and maximum profit in single pass
- **Time:** O(n) | **Space:** O(1)
- **Example:** `[7, 1, 5, 3, 6, 4]` → `5` (buy at 1, sell at 6)

## Key Concepts
- Hash Map Technique
- Two/Three-Pointer Technique
- Dynamic Programming
- Greedy Algorithms
- In-place Manipulation

## How to Run
```bash
g++ -std=c++17 filename.cpp -o output
./output
```

Example:
```bash
g++ -std=c++17 "2Sum Problem.cpp" -o twosum
./twosum
```

---

**Author:** B Rohit Kumar  
**CSE Student**  
**Happy Coding!** 🚀
