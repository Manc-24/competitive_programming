# Modular Mirrors

## Problem Statement

You are given two integers `N` and `M`.

Construct an array `A` of length `N` such that:

- `0 <= A[i] < M`
- At least one element of the array is greater than `0`
- For every index `i`:

```math
A[i] ≡ (A[i-1] + A[i+1]) mod M
```

Boundary values outside the array are considered `0`:

```text
A[0] = 0
A[N+1] = 0
```

Here,

```text
x ≡ y (mod M)
```

means `x` and `y` leave the same remainder when divided by `M`.

---

## Input Format

- First line contains integer `T` — number of test cases.
- Each test case contains two integers:
  
```text
N M
```

---

## Output Format

For each test case:

- Print `-1` if no valid array exists.
- Otherwise print any valid array of length `N`.

---

## Constraints

```text
1 <= T <= 1e5
1 <= N <= 2 * 1e5
2 <= M <= 1e9
Sum of N over all test cases <= 2 * 1e5
```

---

## Example

### Input

```text
3
5 7
3 5
2 10
```

### Output

```text
4 4 0 3 3
-1
1 1
```

---

## Observation

Using the relation:

```math
A[i+1] = A[i] - A[i-1] (mod M)
```

the sequence becomes periodic:

```text
x x 0 y y 0 ...
```

where:

```text
x + y = M
```

A valid construction exists only when:

```text
N % 3 == 2
```
