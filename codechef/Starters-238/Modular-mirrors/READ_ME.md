# Modular Mirrors

---

## Problem Statement

You are given two integers `N` and `M`.

Construct an array `A` of length `N` such that:

- `0 <= A[i] < M`
- At least one element is greater than `0`
- For every index `i`:

```math
A[i] ≡ (A[i-1] + A[i+1]) mod M
```

Boundary conditions:

```text
A[0] = 0
A[N+1] = 0
```

---

## Key Observation

Rearranging the equation:

```math
A[i+1] = A[i] - A[i-1] (mod M)
```

This creates a repeating periodic pattern:

```text
x x 0 y y 0 ...
```

where:

```text
x + y = M
```

The sequence repeats every `6` elements.

A valid construction exists only when:

```text
N % 3 == 2
```

---

## Construction Used

For odd `M`:

```text
x = floor(M / 2)
y = ceil(M / 2)
```

For even `M`:

```text
x = y = M / 2
```

Generated pattern:

```text
x x 0 y y 0
```

repeated as needed.

---

## My Learning From This Problem

- Understanding recurrence relations in modular arithmetic
- Discovering periodic patterns
- Constructive algorithm thinking
- Observing hidden repetition in equations

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
