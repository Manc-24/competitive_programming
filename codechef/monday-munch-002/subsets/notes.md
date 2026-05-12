Debugging Notes
Mistake I Initially Made

I first tried solving the problem iteratively by expanding the subsets vector while looping over it.

Problematic loop:

for(int j = 0; j < arr.size(); j++)

Inside the loop I was also doing:

arr.push_back(x);

This caused arr.size() to continuously increase during iteration.

Example:

size = 1
size = 2
size = 3
size = 4
...

The loop effectively never stopped and eventually caused:

std::bad_alloc

which means the program exhausted available memory.

What I Learned

When modifying a vector while iterating over it, the original size should be stored before the loop begins.

Correct pattern:

int n = arr.size();

for(int j = 0; j < n; j++)
{
    ...
}
