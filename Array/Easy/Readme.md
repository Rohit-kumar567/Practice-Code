# Array Problems - Easy Level

This folder contains solutions to fundamental array manipulation problems. These problems help build a strong foundation in array operations and are commonly asked in coding interviews.

## Problems Solved

### 1. Largest Element in an Array
**File:** `Largest_element.cpp`

**Problem:** Find the largest element in a given array.

**Approach:** 
- Initialize the first element as maximum
- Iterate through the array and update max whenever a larger element is found
- Time Complexity: O(n)
- Space Complexity: O(1)

**Example:**
```
Input: [2, 5, 1, 3, 0]
Output: 5
```

---

### 2. Second Largest Element in an Array without Sorting
**File:** `Second_largest_element.cpp`

**Problem:** Find the second largest and second smallest elements in an array without sorting.

**Approach:**
- Maintain two variables for largest and second largest (and similarly for smallest)
- Single pass through the array updating both values appropriately
- Handle edge cases where array has fewer than 2 elements
- Time Complexity: O(n)
- Space Complexity: O(1)

**Example:**
```
Input: [1, 2, 4, 7, 7, 5]
Output: Second largest = 5, Second smallest = 2
```

---

### 3. Check if the Array is Sorted
**File:** `Array_sorting_check.cpp`

**Problem:** Check whether a given array is sorted in ascending order.

**Approach:**
- Compare each element with its previous element
- If any element is smaller than the previous one, return false
- Time Complexity: O(n)
- Space Complexity: O(1)

**Example:**
```
Input: [1, 2, 3, 4, 5]
Output: True
```

---

### 4. Remove Duplicates from Sorted Array
**File:** `Duplicates_remove.cpp`

**Problem:** Remove duplicates from a sorted array in-place and return the count of unique elements.

**Approach:**
- Use two pointers: one for the position of last unique element, another to traverse
- When a different element is found, move it to the next unique position
- Time Complexity: O(n)
- Space Complexity: O(1)

**Example:**
```
Input: [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
Output: Unique count = 5, Array = [0, 1, 2, 3, 4]
```

---

### 5. Left Rotate an Array by One Place
**File:** `Left_rotate.cpp`

**Problem:** Rotate all elements of an array to the left by one position.

**Approach:**
- Store the first element in a temporary variable
- Shift all other elements one position to the left
- Place the stored element at the end
- Time Complexity: O(n)
- Space Complexity: O(1)

**Example:**
```
Input: [1, 2, 3, 4, 5]
Output: [2, 3, 4, 5, 1]
```

---

### 6. Rotate Array Left or Right by D Places
**File:** `Left_Right_Rotate_By_D.py`

**Problem:** Rotate an array to the left or right by k positions.

**Approach:**
- Use the reversal algorithm for efficient rotation
- For right rotation: reverse entire array, then reverse first k elements, then reverse remaining elements
- For left rotation: reverse first k elements, then reverse remaining elements, then reverse entire array
- Time Complexity: O(n)
- Space Complexity: O(1)

**Example:**
```
Input: [1, 2, 3, 4, 5, 6, 7], k = 2, direction = "right"
Output: [6, 7, 1, 2, 3, 4, 5]
```

---

### 7. Linear Search
**File:** `Linear_search.py`

**Problem:** Search for a specific element in an array and return its index.

**Approach:**
- Iterate through the array sequentially
- Return the index when the element is found
- Return -1 if the element is not present
- Time Complexity: O(n)
- Space Complexity: O(1)

**Example:**
```
Input: [1, 2, 3, 4, 5], num = 4
Output: 3
```

---

### 8. Find Missing Number
**File:** `Find_missing_number.py`

**Problem:** Find the missing number in an array containing n-1 elements from the range [1, n].

**Approach:**
- Calculate the sum of first N natural numbers using formula: N*(N+1)/2
- Calculate the sum of elements present in the array
- The difference gives the missing number
- Time Complexity: O(n)
- Space Complexity: O(1)

**Example:**
```
Input: [1, 2, 4, 5], N = 5
Output: 3
```

---

### 9. Move Zeros to End
**File:** `Move_zeros_toend.py`

**Problem:** Move all zeros in an array to the end while maintaining the relative order of non-zero elements.

**Approach:**
- Find the first zero in the array
- Use two pointers: one at the first zero, another to traverse
- Swap non-zero elements with the zero pointer and increment it
- Time Complexity: O(n)
- Space Complexity: O(1)

**Example:**
```
Input: [0, 1, 0, 3, 12]
Output: [1, 3, 12, 0, 0]
```

---

### 10. Union of Two Sorted Arrays
**File:** `Union.py`

**Problem:** Find the union of two sorted arrays (all unique elements from both arrays in sorted order).

**Approach:**
- Use two pointers to traverse both arrays simultaneously
- Add smaller element to result, avoiding duplicates
- Append remaining elements from either array
- Time Complexity: O(n + m)
- Space Complexity: O(n + m) for the result

**Example:**
```
Input: arr1 = [1, 2, 3, 4, 5], arr2 = [2, 3, 4, 4, 5, 11, 12]
Output: [1, 2, 3, 4, 5, 11, 12]
```

---

### 11. Longest Subarray with Sum K
**File:** `Longest_subarray_sum_K.cpp`

**Problem:** Find the length of the longest subarray with sum equal to k (works for arrays with negative numbers).

**Approach:**
- Use prefix sum technique with a hash map to store prefix sums and their earliest indices
- For each element, calculate running sum
- If sum equals k, update max length
- If (sum - k) exists in map, calculate subarray length
- Store only the first occurrence of each prefix sum
- Time Complexity: O(n)
- Space Complexity: O(n)

**Example:**
```
Input: [-1, 1, 1], k = 1
Output: 3
```

---

### 12. Maximum Consecutive Ones
**File:** `Max_consecutive_ones.cpp`

**Problem:** Find the maximum number of consecutive 1's in a binary array.

**Approach:**
- Maintain a counter for current consecutive 1's
- Reset counter when 0 is encountered
- Track the maximum count seen so far
- Time Complexity: O(n)
- Space Complexity: O(1)

**Example:**
```
Input: [1, 1, 0, 1, 1, 1]
Output: 3
```

---

### 13. Find the Single Non-Repeating Element
**File:** `number_appears_ons.cpp`

**Problem:** Find the element that appears exactly once in an array where all other elements appear twice.

**Approach:**
- Find the maximum element to determine hash array size
- Create a frequency hash array
- Count occurrences of each element
- Return the element with frequency 1
- Time Complexity: O(n)
- Space Complexity: O(max_element)

**Example:**
```
Input: [4, 1, 2, 1, 2]
Output: 4
```

---

## Key Concepts Practiced

- **Array Traversal:** Iterating through arrays efficiently
- **Two-Pointer Technique:** Used in duplicate removal, moving zeros, and union operations
- **In-place Modifications:** Modifying arrays without extra space
- **Mathematical Formulas:** Using sum formula to find missing numbers
- **Reversal Algorithm:** Efficient array rotation technique
- **Edge Case Handling:** Managing empty arrays and single-element arrays
- **Time Optimization:** Solving problems in O(n) time without sorting
- **Prefix Sum Technique:** Used for subarray sum problems
- **Hash Maps:** Efficient frequency counting and lookups
- **Hash Arrays:** Space-efficient counting for bounded values

## How to Run

To compile and run any of these programs:

```bash
g++ -std=c++17 filename.cpp -o output
./output
```

For example:
```bash
g++ -std=c++17 Largest_element.cpp -o largest
./largest
```

For C programs:
```bash
gcc filename.c -o output
./output
```

For Python programs:
```bash
python filename.py
```

## Learning Outcomes

After solving these problems, you should be comfortable with:
- Basic array manipulation techniques
- Writing efficient single-pass algorithms
- Handling edge cases in array problems
- Understanding space-time tradeoffs
- Implementing in-place array modifications
- Using two-pointer technique for optimization
- Applying mathematical approaches to array problems
- Using prefix sum technique for subarray problems
- Implementing hash-based solutions for frequency problems
- Working with binary arrays and consecutive elements

---

**Author:** B Rohit Kumar  
**CSE Student**  
**Happy Coding!** 🚀
