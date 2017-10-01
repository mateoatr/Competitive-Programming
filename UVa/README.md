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


### Binomial Coefficients

- **369** : Construction of a table for binomial coefficients.
- **530** : Compute binomials that fit into a 32 bit integer. Take into account that binomial values repeat after `k > n/2`.
- **10105** : For multinomials of the form `(a + b + ...)^n`, the coefficient of the product with exponent `A` for `a`, `B` for `b`, ... is equal to `n!/(A! * B! * ...)`.