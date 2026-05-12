PROBLEM STATEMENT:-
Chef Builds Subsets
Chef has a list of unique integers inputNumbers
inputNumbers and wants to explore all possible subsets of this list, including the empty subset. Chef aims to generate the complete power set without any duplicates, regardless of the order in which the subsets appear.
Help Chef by writing a function that returns all these subsets for the given list of integers.

Function Declaration
Function Name findSubsets
findSubsets - This function generates all possible subsets (the power set) of a given list of integers.

Parameters
inputNumbers
inputNumbers: A reference to an array containing the input integers. The array may be empty and contains distinct integers.
Return Value
Returns an array of arrays representing all unique subsets of the input numbers.
Each inner array is a subset of the input.
The output includes the empty subset and all other subsets in any order.
