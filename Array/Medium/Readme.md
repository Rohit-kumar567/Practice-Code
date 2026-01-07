# Array Problems - Medium Level

This folder contains solutions to intermediate array manipulation problems. These problems build upon fundamental concepts and introduce more advanced techniques commonly asked in coding interviews.

## Problems Solved

### 1. Two Sum Problem
**File:** `2Sum Problem.cpp`

**Problem:** Find two numbers in an array that add up to a given target and return their indices.

**Approach:**
- Use a hash map to store elements and their indices as we traverse
- For each element, calculate its complement (target - current element)
- Check if complement exists in the map
- If found, return the indices; otherwise, store current element
- Time Complexity: O(n)
- Space Complexity: O(n)

**Example:**
```
Input: arr = [2, 6, 5, 8, 11], target = 14
Output: [1, 3] (indices of 6 and 8)
```

**Key Insight:** The hash map approach reduces time complexity from O(n²) brute force to O(n) by trading space for time.

---

### 2. Sort Array of 0s, 1s, and 2s (Dutch National Flag Problem)
**File:** `sort_0_1_2_ofarray.cpp`

**Problem:** Sort an array containing only 0s, 1s, and 2s in a single pass without using extra space.

**Approach:**
- Use the Dutch National Flag algorithm with three pointers
- `low`: boundary for 0s (left section)
- `mid`: current element being processed
- `high`: boundary for 2s (right section)
- Process elements:
  - If 0: swap with low, increment both low and mid
  - If 1: already in correct position, increment mid
  - If 2: swap with high, decrement high only
- Time Complexity: O(n)
- Space Complexity: O(1)

**Example:**
```
Input: [2, 0, 2, 1, 1, 0]
Output: [0, 0, 1, 1, 2, 2]
```

**Key Insight:** This is an optimal in-place sorting algorithm for three distinct values, maintaining three regions in a single pass.

---

## Key Concepts Practiced

- **Hash Map Technique:** Using hash maps for O(1) lookups to optimize search problems
- **Two-Pointer/Three-Pointer Technique:** Managing multiple pointers to partition and sort arrays
- **Dutch National Flag Algorithm:** Efficient three-way partitioning in single pass
- **In-place Sorting:** Sorting without using additional space
- **Complement Search:** Finding pairs that sum to a target using mathematical relationships
- **Space-Time Tradeoff:** Understanding when to use extra space for better time complexity

## How to Run

To compile and run any of these programs:

```bash
g++ -std=c++17 filename.cpp -o output
./output
```

For example:
```bash
g++ -std=c++17 "2Sum Problem.cpp" -o twosum
./twosum
```

Or:
```bash
g++ -std=c++17 sort_0_1_2_ofarray.cpp -o sort
./sort
```

## Learning Outcomes

After solving these problems, you should be comfortable with:
- Applying hash maps to optimize array search problems
- Implementing the Dutch National Flag algorithm for three-way partitioning
- Using multiple pointers effectively for in-place array manipulation
- Understanding when to use space for time optimization
- Solving pair-finding problems efficiently
- Handling sorted and unsorted arrays with different techniques
- Writing single-pass algorithms for complex array transformations

## Problem Difficulty Progression

These medium-level problems introduce:
- **Hash-based optimizations** beyond basic frequency counting
- **Multi-pointer algorithms** for partitioning and arrangement
- **Constraint-based sorting** that exploits problem-specific properties
- **Complement-based search techniques** for sum problems

## Related Concepts

- **Two Sum** is a foundation for many other problems like Three Sum, Four Sum
- **Dutch National Flag** algorithm can be extended to sort arrays with k distinct values
- These techniques are frequently combined with other algorithms for more complex problems

---

**Author:** B Rohit Kumar  
**CSE Student**  
**Happy Coding!** 🚀
