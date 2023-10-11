# Max-Min
A text file (named numbers.txt, defined with #define) reports a sequence of integer numbers, with
either spaces or ‘\n’ as separators. Write a C program to verify that each i-th value xi (with i ≥2) can
obtained by the previous two values (xi-2 and xi-1) by applying a single arithmetic operator. In other
words, you should verify that each xi is either the sum (xi-2 + xi-1), the difference (xi-2 - xi-1), the product
(xi-2 * xi-1) or the division (xi-2 / xi-1) of the previous two (NB careful to avoid divisions by 0!).
If a value does not verify the acceptance criteria, the program needs to discard it and pass to the next
one. The program should also identify the maximum and minimum values of the sequence, excluding
the non-valid data from the computation.
At the end of the verification, the program should print on the screen:
1. the final result of the verification. In case the sequence contained only valid values, the program
should print a corresponding message. Otherwise, it should print how many values have been
discarded.
2. the maximum and minimum values of the sequence, excluding the discarded values from the
computation.
