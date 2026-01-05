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

## Key Concepts Practiced

- **Array Traversal:** Iterating through arrays efficiently
- **Two-Pointer Technique:** Used in duplicate removal
- **In-place Modifications:** Modifying arrays without extra space
- **Edge Case Handling:** Managing empty arrays and single-element arrays
- **Time Optimization:** Solving problems in O(n) time without sorting

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

## Learning Outcomes

After solving these problems, you should be comfortable with:
- Basic array manipulation techniques
- Writing efficient single-pass algorithms
- Handling edge cases in array problems
- Understanding space-time tradeoffs
- Implementing in-place array modifications

---

**Author:** B Rohit Kumar  
**CSE Student**  
**Happy Coding!** 🚀
