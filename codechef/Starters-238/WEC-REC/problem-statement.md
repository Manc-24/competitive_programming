WEC-REC
 WEC-NITK is conducting a recruitment contest for students of batch '29.

There are 
N
N participants numbered from 
1
1 to 
N
N, and participant 
i
i scored 
A
i
A 
i
​
  in the contest.

WEC uses a weird ranking system called K-clustering:

All candidates with the same score form a cluster.
The highest-score cluster gets rank 
1
1, the next highest-score cluster gets rank 
2
2, and so on.
Only candidates belonging to the top 
K
K ranked clusters are eligible to be selected for the next round.

Further, due to logistical constraints, at most 
X
X candidates can be selected.

Determine the maximum number of candidates who can be selected for the second round.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains three space-separated integers 
N
,
X
N,X and 
K
K — the number of participants, the limit on number of selections, and the number of clusters that are valid.
The second line contains 
N
N space-separated integers 
A
1
,
…
,
A
N
A 
1
​
 ,…,A 
N
​
 , denoting the scores of the participants.
Output Format
For each test case, output on a new line a single integer representing the number of candidates selected for the second round.
