# Assignment-2

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019240  |   Ayush Khandlewal | Ayush-Khandelwal-007 |
|    IIT2019501  |   Ayush Bhagta |  Ayush Bhagta add | 
|    BIM2015003  |   Tauhid Alam |  Tauhid Alam add  |


**Group No-**"19"

**Faculty Name-**""

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Given an array arr[] of n numbers and a number K, find the number of
subsets of arr[] having XOR of elements as K. Solve using Dynamic
programming.

---
## How to use code
A quick and simplified answer is that Lorem Ipsum refers to text that the DTP (Desktop Publishing) industry use as replacement text when the real text is not available. ... Lorem Ipsum is dummy text which has no meaning however looks very similar to real text.

### Download project
```
git clone https://github.com/Ayush-Khandelwal-007/DAA
```
<!-- ### Project Initialize 
```
cd daa
#create assignment-1 folder
mkdir assignment_01

#go to assignment-1
cd assignment_01

#Create file
touch readme.md
touch main.py
.
.
```
--- -->

### Compiling the code
Pre-requisit to run this code is to have a any c++ compiler like g++ installed in your system.
```
cd DAA
cd Assignment2
g++ code.cpp
```

### Run the code
```
./a.out
```
### Output
```
The number of subsets of arr[] having XOR of elements as K
```
---

**Test case**
Sample Inout Output Interaction on termial.

```

```

---

### Theory
Given   an   array   arr[]   of   size   n   ,we   will   use   dynamic programming approach to find the number to elements having XOR value as K.Here in dp[i][j] we keep a count of numberof  sets  from  0  to  i-1  having  XOR  value  as  j. At  the  end  the program we will give dp[n][k] as output

1. We initialize all values of dp[i][j] as 0.
1. Set value of dp[0][0] = 1 since XOR of an empty set is 0.
1. terate over all the values of arr[i] from left to right andfor each arr[i],iterate over all the possible values of XORi.e  from  0  to  m  (both  inclusive).Here  m  is  maximumpossible  value  for  XOR  of  any  of  possible  subsets.  Tocalculate m,we take maximum element from array and m=2<sup>[log<sub>2</sub>(max-element)] + 1</sup> -1
1. Fill the dp array as following:\
    &nbsp; for i = 1 to n: \
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;for j = 0 to m: \
    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;dp[i][j] = dp[i­-1][j] + dp[i­-1][j^arr[i-1]] 

1. This can be explained as, if there is a subset arr[0…i­-2] with XOR value j, then there also exists a subset arr[0…i-1] with XOR value j. also if there exists a subset arr[0….i-2] with XOR value j^arr[i] then clearly there exist a subset arr[0…i-1] with XOR value j, as j ^ arr[i-1] ^ arr[i-1] = j.

1. Counting the number of subsets with XOR value k: Since dp[i][j] is the number of subsets having j as XOR value from the subsets of arr[0..i-1], then the number of subsets from set arr[0..n] having XOR value as K will be dp[n][K]

---


### Analysis


**Time Complexity**

In  this  approach  we  iterate  over  whole  array  one  by  onefinding and storing the possible subsets that generate a valuepwe  say  and  store  it  in  thedp[i][k]which  will  need  timeto iterate over the array and for each element a loop of timecomplexitym,wheremis  the  maximum  possible  value  ofXOR  and  could  be  found  from  the  max  value  of  element  in array.

m=2<sup>[log<sub>2</sub>(max-element)] + 1</sup> -1

This will result in the time complexity of **O(n∗m).**

**Space Complexity**

n  this  approach  we  will  have  to  store  the  values  for  allpossible  cases  that  are  generated,  as  thedp[i][j]requiresdp[i−1][j]and  hence  a  2D  array  of  sizen∗mis  requiredwheremis same as mentioned above, that is:

m=2<sup>[log<sub>2</sub>(max-element)] + 1</sup> -1

This will result in the space complexity of **O(n∗m).**

---

### References


- https://www.geeksforgeeks.org/calculate-xor-1-n
- https://www.geeksforgeeks.org/dynamic-programming/
- Cormen, Leiserson, Rivest, and Stein (2009). Introduction to Algorithms, 3rd edition.
