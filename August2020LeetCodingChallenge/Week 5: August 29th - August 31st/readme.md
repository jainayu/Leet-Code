# [Week 5: August 29th - August 31st](https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/553/week-5-august-29th-august-31st/)

## [Pancake Sorting](https://leetcode.com/problems/pancake-sorting/)

Given an array of integers A, We need to sort the array performing a series of pancake flips.

In one pancake flip we do the following steps:
- Choose an integer k where 0 <= k < A.length.
- Reverse the sub-array A[0...k].

For example, if A = [3,2,1,4] and we performed a pancake flip choosing k = 2, we reverse the sub-array [3,2,1], so A = [1,2,3,4] after the pancake flip at k = 2.

Return an array of the k-values of the pancake flips that should be performed in order to sort A. Any valid answer that sorts the array within 10 * A.length flips will be judged as correct.

Example 1:
```
Input: A = [3,2,4,1]
Output: [4,2,4,3]
Explanation: 
We perform 4 pancake flips, with k values 4, 2, 4, and 3.
Starting state: A = [3, 2, 4, 1]
After 1st flip (k = 4): A = [1, 4, 2, 3]
After 2nd flip (k = 2): A = [4, 1, 2, 3]
After 3rd flip (k = 4): A = [3, 2, 1, 4]
After 4th flip (k = 3): A = [1, 2, 3, 4], which is sorted.
Notice that we return an array of the chosen k values of the pancake flips.
```
Example 2:
```
Input: A = [1,2,3]
Output: []
Explanation: The input is already sorted, so there is no need to flip anything.
Note that other answers, such as [3, 3], would also be accepted.
```
Constraints:
- 1 <= A.length <= 100
- 1 <= A[i] <= A.length
- All integers in A are unique (i.e. A is a permutation of the integers from 1 to A.length).

## [Delete Node in a BST](https://leetcode.com/problems/delete-node-in-a-bst/)

Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root node reference (possibly updated) of the BST.

Basically, the deletion can be divided into two stages:
- Search for a node to remove.
- If the node is found, delete the node.

Note: Time complexity should be O(height of tree).

Example:
```
root = [5,3,6,2,4,null,7]
key = 3

    5
   / \
  3   6
 / \   \
2   4   7

Given key to delete is 3. So we find the node with value 3 and delete it.

One valid answer is [5,4,6,2,null,null,7], shown in the following BST.

    5
   / \
  4   6
 /     \
2       7

Another valid answer is [5,2,6,null,4,null,7].

    5
   / \
  2   6
   \   \
    4   7
```

## [Largest Component Size by Common Factor](https://leetcode.com/problems/largest-component-size-by-common-factor/)

Given a non-empty array of unique positive integers A, consider the following graph:

- There are A.length nodes, labelled A[0] to A[A.length - 1];
- There is an edge between A[i] and A[j] if and only if A[i] and A[j] share a common factor greater than 1.

Return the size of the largest connected component in the graph.

Example 1:
```
Input: [4,6,15,35]
Output: 4
```
Example 2:
```
Input: [20,50,9,63]
Output: 2
```
Example 3:
```
Input: [2,3,6,7,4,12,21,39]
Output: 8
```
Note:
- 1 <= A.length <= 20000
- 1 <= A[i] <= 100000




