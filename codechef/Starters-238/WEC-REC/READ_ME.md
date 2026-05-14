![C++](https://img.shields.io/badge/C%2B%2B-17-blue)
# WEC-REC — My Approach & Learning Notes

We are given:

- N participants
- scores of all participants
- only the top K score clusters are eligible
- maximum X candidates can finally be selected

A cluster means:
All participants having the same score belong to the same group.

Example:

100 100 90 90 80

Clusters are:

[100,100] -> Rank 1 cluster<br>
[90,90]   -> Rank 2 cluster<br>
[80]      -> Rank 3 cluster<br>

If K = 2, only participants scoring 100 and 90 are eligible.
---
## My Thought Process

I wanted to process the array cluster-by-cluster.

**Core idea:**
If the current element is same as previous cluster score:<br>
→ stay in same cluster <br>
If the score changes:<br>
→ we entered a new cluster<br>
→ decrement k

Once k becomes 0, stop processing.

Important Learning: Sorting Direction

Initially, I made a mistake because:

cpp
```sort(arr.begin(), arr.end()); ```

sorts the array in ascending order by default.

Example:

80 100 90

becomes:

80 90 100

But the problem requires:

highest score cluster first

So we actually need:

100 90 80
Two Ways to Sort in Descending Order
Method 1: sort() + reverse()
cpp```sort(arr.begin(), arr.end());<br>
reverse(arr.begin(), arr.end()); ```
Explanation
sort() first sorts in ascending order
reverse() flips the array

Method 2: Using greater<int>()

Cleaner way:

cpp```sort(arr.begin(), arr.end(), greater<int>());```
What is greater<int>() ?

Normally, sort() uses:

<

comparison internally.

Meaning:

smaller element comes first

But greater<int>() changes the comparison logic to:

>

Meaning:

larger element comes first

So sorting automatically happens in descending order.

Important Mistake I Learned From

I accidentally wrote:

sort(arr.end(), arr.begin());

This caused runtime error.

Correct syntax is:

sort(start_iterator, end_iterator);

So:

sort(arr.begin(), arr.end());

is correct.

# My Final Logic
1. Sort scores in descending order
2. Start from highest score cluster
3. If score is same:
      same cluster
4. Else:
      new cluster
      decrement k
5. Stop when k clusters are exhausted
6. Count at most X candidates
