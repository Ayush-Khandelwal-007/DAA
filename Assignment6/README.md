# Assignment-6

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019240  |   Ayush Khandlewal | Ayush-Khandelwal-007 |
|    IIT2019501  |   Ayush Bhagta |  newton1088 | 
|    BIM2015003  |   Tauhid Alam |  bim2015003  |


**Group No-**"19"

**Faculty Name-**"Dr. M.D. Javed"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement

Given a m liter jug and a n liter jug which are initially
empty. The jugs don’t have markings to allow measuring
smaller quantities. We have to use the jugs to measure d liters of water where d < n and d < m.

(X, Y) corresponds to a state where X refers to amount
of water in Jug1 and Y refers to amount of water in Jug2
Determine the path from initial state (xi, yi) to final state
(xf, yf), where (xi, yi) is (0, 0) which indicates both Jugs
are initially empty and (xf, yf) indicates a state which could
be (0, d) or (d, 0).

The operations we can perform are:


• Empty a Jug, (X, Y)− >(0, Y) Empty Jug 1
• Fill a Jug, (0, 0)->(X, 0) Fill Jug 1
• Pour water from one jug to the other until one of the jugs
is either empty or full, (X, Y) -> (X-d, Y+d)

---
## How to use code

Clone this repository on your device localy.Further compile the code and run as per the below instructions. Finally give the input as per the code asks to input.

### Download project
```
git clone https://github.com/Ayush-Khandelwal-007/DAA
```

### Going to the Assignment folder
Pre-requisit to run this code is to have python3 installled in your system.
```
cd DAA/Assignment3
```

### Run the code
```
python3 code.py
```
### Intput
```
Give the Maximum capacity of both the jugs, required amount and the type of Algorithm desired to solve in the order asked by the progam.
```
### Output
```
Output will first show all the possible cases that are possible from previous cases and finally on reaching the required state , print the path that was chosen to reach it.
```
---

**Test case**

Sample Inout Output Interaction on termial.

```
 ayush@Ayushs-MacBook-Air  ~/Documents/projects/DAA   main ±  /usr/local/bin/python3 /Users/ayush/Documents/projects/DAA/Assignment3/code.py
Receiving the volume of the jugs...
Enter first jug volume (>1): 5
Enter second jug volume (>1): 3
Receiving the desired amount of the water...
Enter the desired amount of water (1 - 5): 2
Enter 'b' for BFS, 'd' for DFS: d
Implementing DFS...
Checking if the gaol is achieved...
Finding next transitions and checking for the loops...
Checking if [5, 0] is visited before...
Checking if [0, 3] is visited before...
Checking if [0, 0] is visited before...
Checking if [0, 0] is visited before...
Checking if [0, 0] is visited before...
Checking if [0, 0] is visited before...
Possible transitions: 
[5, 0]
[0, 3]
Fill 3-liter jug:                        [0, 3]
Checking if the gaol is achieved...
Finding next transitions and checking for the loops...
Checking if [5, 3] is visited before...
Checking if [0, 3] is visited before...
Checking if [3, 0] is visited before...
Checking if [0, 3] is visited before...
Checking if [0, 3] is visited before...
Checking if [0, 0] is visited before...
Possible transitions: 
[5, 3]
[3, 0]
Pour 3-liter jug into 5-liter jug:       [3, 0]
Checking if the gaol is achieved...
Finding next transitions and checking for the loops...
Checking if [5, 0] is visited before...
Checking if [3, 3] is visited before...
Checking if [3, 0] is visited before...
Checking if [0, 3] is visited before...
Checking if [0, 0] is visited before...
Checking if [3, 0] is visited before...
Possible transitions: 
[5, 0]
[3, 3]
Fill 3-liter jug:                        [3, 3]
Checking if the gaol is achieved...
Finding next transitions and checking for the loops...
Checking if [5, 3] is visited before...
Checking if [3, 3] is visited before...
Checking if [5, 1] is visited before...
Checking if [3, 3] is visited before...
Checking if [0, 3] is visited before...
Checking if [3, 0] is visited before...
Possible transitions: 
[5, 3]
[5, 1]
Pour 3-liter jug into 5-liter jug:       [5, 1]
Checking if the gaol is achieved...
Finding next transitions and checking for the loops...
Checking if [5, 1] is visited before...
Checking if [5, 3] is visited before...
Checking if [5, 1] is visited before...
Checking if [3, 3] is visited before...
Checking if [0, 1] is visited before...
Checking if [5, 0] is visited before...
Possible transitions: 
[5, 3]
[0, 1]
[5, 0]
Clear 3-liter jug:                       [5, 0]
Checking if the gaol is achieved...
Finding next transitions and checking for the loops...
Checking if [5, 0] is visited before...
Checking if [5, 3] is visited before...
Checking if [5, 0] is visited before...
Checking if [2, 3] is visited before...
Checking if [0, 0] is visited before...
Checking if [5, 0] is visited before...
Possible transitions: 
[5, 3]
[2, 3]
Pour 5-liter jug into 3-liter jug:       [2, 3]
Checking if the gaol is achieved...
The goal is achieved
Printing the sequence of the moves...

Starting from:                           [0, 0]
1 : Fill 3-liter jug:                    [0, 3]
2 : Pour 3-liter jug into 5-liter jug:   [3, 0]
3 : Fill 3-liter jug:                    [3, 3]
4 : Pour 3-liter jug into 5-liter jug:   [5, 1]
5 : Clear 3-liter jug:                   [5, 0]
6 : Pour 5-liter jug into 3-liter jug:   [2, 3]
```

---

### Theory
Step  1.  Initialize  an  empty  sting  of  pair  containing  [0,0]that  is  the  initial  state  of  the  jugs.  This  string  contain  pathfor a particular state to be achieved.

Step   2.   We   Initialize   an   empty   deque(Doubly   EndedQueue) and push the first path that is [[0,0]] to it.

Step  3.  We  check  if  last  state  of  the  the  left  most  path  ofthe  deque  is  the  required  path  or  not  and  exit  the  loop  andsave that path in the final path variable and move to Step6 ifthe condition satisfies. Otherwise continue to Step 4.

Step  4.  We  look  for  all  the  possible  cases  from  the  laststate  of  the  first  path  that  is  in  the  queue  and  remove  thatpath  and  further  add  all  the  possible  paths  to  the  queue  toleft for the DFS(Depth First Search) approach or to the rightfor BFS(Breadth First Search) approach.

Step 5.We go back to step 3 and continue the iteration untilno  further  transition  is  possible  that  is  the  given  conditioncould not be satisfied.

Step  6.  We  print  the  final  path  variable  in  the  order  oftransitions made to reach the condition.

---


### Analysis


**Time Complexity**

In this approach we iterate over whole map generated by thenodes containing all the possible amount of water in both thejugs  until  we  find  the  any  of  teh  one  required  condition.  Soto  iterate  over  a  graph  by  BFS  or  by  DFS  time  complexitywill be as below:

**Best Case**-If  the  required  amount  of  water  is  equal  to  ca-pacity of one of the jug.This will result in the time complexityof constant order.SoBest Case Time Complexity=Ω(1)


**Worst Case**-If  the  given  condition  is  true  and  the  requiredamount  of  water  is  what  we  get  at  the  farthest  end.This  willresult  in  the  time  complexity  of  orderO(V+E)where  Eranges  from  1  toV2,  but  in  our  case  number  of  edges  isequal to six hence number of edges will be of order3V, so,the  time  complexity  will  be  of  order  4V,  which  is  treated  aslinear  in  time  complexity,  where  V  is  the  number  of  nodesand  E  is  the  number  of  Edges.  Maximum  value  of  V  inthis  case  could  be  N*M  where  N  and  M  are  the  maximumcapacities of mug.SoWorst Case Time Complexity=O(V)= O(N∗M)


**Space Complexity**

In this approach we don’t have need to store any graph as all the path are logically decided and checked at the time, so nomore  Extra  space  is  required  to  store  the  map. But  we  storethe  path  that  is  used  to  reach  that  point  which  whose  lengthvary from 1 to V and we need to store path for all V verticesand  hence  the  required  space  is  of  order V <sup>2</sup>.  Maximumvalue  of  V  in  this  case  could  be  N*M  where  N  and  Mare  the  maximum  capacities  of  mug. So Space Complexity=O((N∗M)<sup>2</sup>)

---

### References

1)  https://www.geeksforgeeks.org/breadth-first-search-or-bfs-for-a-graph/
2)  https://www.geeksforgeeks.org/depth-first-search-or-dfs-for-a-graph/
3)  https://www.eecis.udel.edu/∼mccoy/courses/cisc4-681.10f/lec-materials/handouts/search-water-jug-handout.pdf
4)  https://en.wikipedia.org/wiki/Breadth-firstsearch
5)  https://en.wikipedia.org/wiki/Depth-firstsearch
6)  R.  S.  Mary,  “An  alternative  arithmetic  approach  to  thewater  jugs  problem,”  Proceedings  on  National  Con-ference  on  Computational  Intelligence  for  EngineeringQuality Software, 1, 2014, pp. 10-13.
7)  S.  Abu  Naser,  “Developing  visualization  tool  for  theteaching AI searching algorithms,” Information Technol-ogy Journal, 7(2), 2008, pp. 350–355.
