# [Week 2: June 8th–June 14th](https://leetcode.com/explore/featured/card/june-leetcoding-challenge/540/week-2-june-8th-june-14th/)

## [Power of Two](https://leetcode.com/problems/power-of-two/)

Given an integer, write a function to determine if it is a power of two.

Example 1:
```
Input: 1
Output: true 
Explanation: 20 = 1
```
Example 2:
```
Input: 16
Output: true
Explanation: 24 = 16
```
Example 3:
```
Input: 218
Output: false
```

## [Is Subsequence](https://leetcode.com/problems/is-subsequence/)

Given a string s and a string t, check if s is subsequence of t.

A subsequence of a string is a new string which is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (ie, "ace" is a subsequence of "abcde" while "aec" is not).

Follow up:
If there are lots of incoming S, say S1, S2, ... , Sk where k >= 1B, and you want to check one by one to see if T has its subsequence. In this scenario, how would you change your code?

Credits:
Special thanks to @pbrother for adding this problem and creating all test cases.

Example 1:
```
Input: s = "abc", t = "ahbgdc"
Output: true
```
Example 2:
```
Input: s = "axc", t = "ahbgdc"
Output: false
```

Constraints:

    0 <= s.length <= 100
    0 <= t.length <= 10^4
    Both strings consists only of lowercase characters.

## [Search Insert Position](https://leetcode.com/problems/search-insert-position/)

Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You may assume no duplicates in the array.

Example 1:
```
Input: [1,3,5,6], 5
Output: 2
```
Example 2:
```
Input: [1,3,5,6], 2
Output: 1
```
Example 3:
```
Input: [1,3,5,6], 7
Output: 4
```
Example 4:
```
Input: [1,3,5,6], 0
Output: 0
```

##[Sort Colors](https://leetcode.com/problems/sort-colors/)

Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note: You are not suppose to use the library's sort function for this problem.

Example:
```
Input: [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
```
Follow up:
	<ul>
    A rather straight forward solution is a two-pass algorithm using counting sort.
    First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number of 0's, then 1's and followed by 2's.
    Could you come up with a one-pass algorithm using only constant space?
	</ul>







