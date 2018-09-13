# UVa

Problems are taken from the [UVa Online Judge](https://uva.onlinejudge.org/). The following list contains all the UVa problems that can be found in uHunt, these problems correspond to the book Competitive Programming 3rd Edition's Exercises. For each problem, theres a brief comment about what the problem is about or the technique involved in its solution.

## Data Structures and Libraries

### C++ STL stack

- **514** : Ad-hoc stack problem. Good for understanding how stacks work.
- **732** : DFS-like recursion. Check if the goal word is being made when popping elements from the stack.

## Mathematics

### Basic Features (BigInteger)

The book and uHunt recommend solving these with the BigInteger Class of Java. Since Python is now being accepted by the judges in the ICPC, I opted for using it for solving these problems.

- **424** : Add big numbers.
- **465** : Very easy problem, just remember that `INT_MAX = 2**31 - 1`. I got two wrong answers because of typos [grin].
- **713** : Simple function to reverse a number.
- **10524** : Very easy.
- **11879** : Very easy, just use Pythons modulo.

### Binomial Coefficients

- **369** : Construction of a table for binomial coefficients.
- **485** : Easy problem. My code for this one contains an optimum way of calculating nCr with Python.
- **530** : Compute binomials that fit into a 32 bit integer. Take into account that binomial values repeat after `k > n/2`.
- **10105** : For multinomials of the form `(a + b + ...)^n`, the coefficient of the product with exponent `A` for `a`, `B` for `b`, ... is equal to `n!/(A! * B! * ...)`.
- **10375** : A good use of Pythons optimum way of calculating nCr (good example of how useful this method is).
- **10532** : Solved with dynamic programming. Make a table, and for each `[i,j]` save in how many ways can we choose k objects from the remaining r-i cells if the previous cell has value n.

### Catalan Numbers

[Catalan numbers](http://mathworld.wolfram.com/CatalanNumber.html) are of the form: `(1/(n+1)) * (2n)C(n)`.

- **991** : Simply compute the `C_n` Catalan number.
- **10007** : The number of different 'binary tree structures' of a tree with `n` nodes is `Cn`. Formula for this problem is `Cn * n!`. Note that `math.factorial(x)` computes factorials pretty fast.

## Problem Solving and Paradigms

### Binary Search

- **679** : Traverse a binary tree multiple times.
- **10474** : Simple binary search. It can be solved by implementing an iterative/recursive binary search or simply by using `lower_bound` of the STL.