# [Week 2: August 8th - August 14th](https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/550/week-2-august-8th-august-14th/)

## [Path Sum III] (https://leetcode.com/problems/path-sum-iii/)

You are given a binary tree in which each node contains an integer value.

Find the number of paths that sum to a given value.

The path does not need to start or end at the root or a leaf, but it must go downwards (traveling only from parent nodes to child nodes).

The tree has no more than 1,000 nodes and the values are in the range -1,000,000 to 1,000,000.

Example:
```
root = [10,5,-3,3,2,null,11,3,-2,null,1], sum = 8

      10
     /  \
    5   -3
   / \    \
  3   2   11
 / \   \
3  -2   1

Return 3. The paths that sum to 8 are:

1.  5 -> 3
2.  5 -> 2 -> 1
3. -3 -> 11
```

## [Rotting Oranges](https://leetcode.com/problems/rotting-oranges/)

In a given grid, each cell can have one of three values:
- the value 0 representing an empty cell;
- the value 1 representing a fresh orange;
- the value 2 representing a rotten orange.

Every minute, any fresh orange that is adjacent (4-directionally) to a rotten orange becomes rotten.

Return the minimum number of minutes that must elapse until no cell has a fresh orange.  If this is impossible, return -1 instead.

Example 1:
```
Input: [[2,1,1],[1,1,0],[0,1,1]]
Output: 4
```
Example 2:
```
Input: [[2,1,1],[0,1,1],[1,0,1]]
Output: -1
Explanation:  The orange in the bottom left corner (row 2, column 0) is never rotten, because rotting only happens 4-directionally.
```
Example 3:
```
Input: [[0,2]]
Output: 0
Explanation:  Since there are already no fresh oranges at minute 0, the answer is just 0.
```

Note:
- 1 <= grid.length <= 10
- 1 <= grid[0].length <= 10
- grid[i][j] is only 0, 1, or 2.

## [Excel Sheet Column Number](https://leetcode.com/problems/excel-sheet-column-number/)

Given a column title as appear in an Excel sheet, return its corresponding column number.

For example:
```
    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 
    ...
```
Example 1:
```
Input: "A"
Output: 1
```
Example 2:
```
Input: "AB"
Output: 28
```
Example 3:
```
Input: "ZY"
Output: 701
```

Constraints:
- 1 <= s.length <= 7
- s consists only of uppercase English letters.
- s is between "A" and "FXSHRXW".




