/*
Explanation of Binary Search Time Complexity

first in linear search let us consider we have 1000 elements in an array
** According to the logic of it we need to compare key with 1000 element it is not really best method to search

Now In Binary Search for 1000 element we can find key by mid elements
initially 1000 elements

10000  ----N
  |
 500    ----N/2
  |
 250    ----N/4
  |
 125    ----N/5
  |          :
  62         :
  |
  31
  |
  15      10 COMPARISONS MAXIMUM
  |
  7
  |
  3
  |
  1      N/2^k

 we can say 
    N/2^k = 1
    logN = K
    so we can say time complexity for binary search is logN
*/

