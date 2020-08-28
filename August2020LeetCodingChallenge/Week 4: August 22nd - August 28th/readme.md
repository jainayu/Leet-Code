# [Week 4: August 22nd - August 28th](https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/552/week-4-august-22nd-august-28th/)

## [Random Point in Non-overlapping Rectangles](https://leetcode.com/problems/random-point-in-non-overlapping-rectangles/)

Given a list of non-overlapping axis-aligned rectangles rects, write a function pick which randomly and uniformily picks an integer point in the space covered by the rectangles.

Note:
- An integer point is a point that has integer coordinates. 
- A point on the perimeter of a rectangle is included in the space covered by the rectangles. 
- ith rectangle = rects[i] = [x1,y1,x2,y2], where [x1, y1] are the integer coordinates of the bottom-left corner, and [x2, y2] are the integer coordinates of the top-right corner.
- length and width of each rectangle does not exceed 2000.
- 1 <= rects.length <= 100
- pick return a point as an array of integer coordinates [p_x, p_y]
- pick is called at most 10000 times.

Example 1:
```
Input: 
["Solution","pick","pick","pick"]
[[[[1,1,5,5]]],[],[],[]]
Output: 
[null,[4,1],[4,1],[3,3]]
```
Example 2:
```
Input: 
["Solution","pick","pick","pick","pick","pick"]
[[[[-2,-2,-1,-1],[1,0,3,0]]],[],[],[],[],[]]
Output: 
[null,[-1,-2],[2,0],[-2,-1],[3,0],[-2,-2]]
```
Explanation of Input Syntax:

The input is two lists: the subroutines called and their arguments. Solution's constructor has one argument, the array of rectangles rects. pick has no arguments. Arguments are always wrapped with a list, even if there aren't any.

## [Stream of Characters](https://leetcode.com/problems/stream-of-characters/)

Implement the StreamChecker class as follows:
- StreamChecker(words): Constructor, init the data structure with the given words.
- query(letter): returns true if and only if for some k >= 1, the last k characters queried (in order from oldest to newest, including this letter just queried) spell one of the words in the given list.


Example:
``
StreamChecker streamChecker = new StreamChecker(["cd","f","kl"]); // init the dictionary.
streamChecker.query('a');          // return false
streamChecker.query('b');          // return false
streamChecker.query('c');          // return false
streamChecker.query('d');          // return true, because 'cd' is in the wordlist
streamChecker.query('e');          // return false
streamChecker.query('f');          // return true, because 'f' is in the wordlist
streamChecker.query('g');          // return false
streamChecker.query('h');          // return false
streamChecker.query('i');          // return false
streamChecker.query('j');          // return false
streamChecker.query('k');          // return false
streamChecker.query('l');          // return true, because 'kl' is in the wordlist
```
Note:
- 1 <= words.length <= 2000
- 1 <= words[i].length <= 2000
- Words will only consist of lowercase English letters.
- Queries will only consist of lowercase English letters.
- The number of queries is at most 40000.
```

## [Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves/)

Find the sum of all left leaves in a given binary tree.
```
Example:

    3
   / \
  9  20
    /  \
   15   7

There are two left leaves in the binary tree, with values 9 and 15 respectively. Return 24.
```

## [Fizz Buzz](https://leetcode.com/problems/fizz-buzz/)

Write a program that outputs the string representation of numbers from 1 to n.

But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.

Example:
```
n = 15,

Return:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]
```

## [Find Right Interval](https://leetcode.com/problems/find-right-interval/)

Given a set of intervals, for each of the interval i, check if there exists an interval j whose start point is bigger than or equal to the end point of the interval i, which can be called that j is on the "right" of i.

For any interval i, you need to store the minimum interval j's index, which means that the interval j has the minimum start point to build the "right" relationship for interval i. If the interval j doesn't exist, store -1 for the interval i. Finally, you need output the stored value of each interval as an array.

Note:
- You may assume the interval's end point is always bigger than its start point.
- You may assume none of these intervals have the same start point.

Example 1:
```
Input: [ [1,2] ]

Output: [-1]

Explanation: There is only one interval in the collection, so it outputs -1.
```

Example 2:
```
Input: [ [3,4], [2,3], [1,2] ]

Output: [-1, 0, 1]

Explanation: There is no satisfied "right" interval for [3,4].
For [2,3], the interval [3,4] has minimum-"right" start point;
For [1,2], the interval [2,3] has minimum-"right" start point.
```

Example 3:
```
Input: [ [1,4], [2,3], [3,4] ]

Output: [-1, 2, -1]

Explanation: There is no satisfied "right" interval for [1,4] and [3,4].
For [2,3], the interval [3,4] has minimum-"right" start point.
```

## [Implement Rand10() Using Rand7()](https://leetcode.com/problems/implement-rand10-using-rand7/)

Given a function rand7 which generates a uniform random integer in the range 1 to 7, write a function rand10 which generates a uniform random integer in the range 1 to 10.

**Do NOT use system's Math.random().**

Example 1:
```
Input: 1
Output: [7]
```
Example 2:
```
Input: 2
Output: [8,4]
```
Example 3:
```
Input: 3
Output: [8,1,10]
```

Note:
- rand7 is predefined.
- Each testcase has one argument: n, the number of times that rand10 is called.

Follow up:
- What is the expected value for the number of calls to rand7() function?
- Could you minimize the number of calls to rand7()?







