# C Programming Language

This repository contains my C programming practice files from Phitron. It includes setup programs, basic print statements, variables, formatted input/output, arithmetic operations, conditional statements, loop examples, practice problems, exam exercises, and Codeforces problem solutions.

## Folder Structure

```text
C/
+-- setup/
|   +-- hello.c
|   +-- input.txt
|   +-- output.txt
+-- Module-1/
|   +-- print.c
|   +-- variable.c
|   +-- output.c
|   +-- limiations.c
|   +-- input.txt
|   +-- output.txt
+-- Module-2/
|   +-- arithmetic.c
|   +-- conditional.c
|   +-- conditional2.c
|   +-- input.txt
|   +-- output.txt
+-- Module-3/
|   +-- loop_1.c
|   +-- loop_2.c
|   +-- loop_condition.c
|   +-- loop_sum.c
|   +-- Break.c
|   +-- continue.c
|   +-- while_loop.c
|   +-- input.txt
|   +-- output.txt
+-- Practice/
|   +-- 1.c
|   +-- 2.c
|   +-- 3.c
|   +-- input.txt
|   +-- output.txt
+-- exam/
|   +-- Print_It.c
|   +-- Multiply.c
|   +-- Divisible.c
|   +-- input.txt
|   +-- output.txt
+-- codeforces/
    +-- module-4/
        +-- problem1.c
        +-- problem2.c
        +-- problem3.c
        +-- problem4.c
        +-- problem5.c
        +-- input.txt
        +-- output.txt
    +-- module-5/
        +-- B_Even_Numbers.c
        +-- C_Even_Odd_Positive_and_Negative.c
        +-- D_Fixed_Password.c
        +-- E_Max.c
        +-- F_Multiplication_table.c
```

## Topics Covered

- Basic C program structure
- `printf()` output
- `scanf()` input
- Integer, float, double, and character variables
- Format specifiers such as `%d`, `%f`, `%lf`, and `%%`
- Arithmetic operators: `+`, `-`, `*`, `/`, `%`
- Conditional statements: `if`, `else if`, `else`
- Nested conditionals
- Looping with `for`
- Incrementing loop counters by different values
- Practicing loop conditions
- Calculating sums with loops
- Using `break` to stop a loop early
- Using `continue` to skip one loop iteration
- Looping with `while`
- Extra practice with printing, addition, and repeated output
- Exam practice with formatted printing, multiplication, and divisibility
- Codeforces practice with comparison, multiple checking, character conversion, digit checking, and alphabet classification
- Codeforces loop practice with printing even numbers in a range
- Codeforces loop practice with counting even, odd, positive, and negative numbers
- Codeforces loop practice with checking a fixed password until it is correct
- Codeforces loop practice with finding the maximum value
- Codeforces loop practice with printing a multiplication table
- Compiling and running C programs with GCC
- Using `input.txt` and `output.txt` for program input/output

## Practice Files

| File | Description |
| --- | --- |
| `setup/hello.c` | First setup program that prints `Hello world`. |
| `Module-1/print.c` | Basic `printf()` example. |
| `Module-1/variable.c` | Demonstrates integer, float, and character variables. |
| `Module-1/output.c` | Reads and prints numbers with percent signs. |
| `Module-1/limiations.c` | Demonstrates larger numeric values and double precision output. |
| `Module-2/arithmetic.c` | Performs sum, difference, product, quotient, and remainder on two integers. |
| `Module-2/conditional.c` | Reads an amount and prints a purchase decision using `if/else if/else`. |
| `Module-2/conditional2.c` | Reads an amount and prints a purchase decision using nested `if/else`. |
| `Module-3/loop_1.c` | Prints odd numbers from 1 to 9 using a `for` loop. |
| `Module-3/loop_2.c` | Practice file for experimenting with loop counter updates. |
| `Module-3/loop_condition.c` | Practice file for writing and testing loop conditions. |
| `Module-3/loop_sum.c` | Reads a number and calculates the sum from 1 to that number using a `for` loop. |
| `Module-3/Break.c` | Prints numbers using a loop and stops early with `break`. |
| `Module-3/continue.c` | Prints numbers from 1 to 10 while skipping 5 using `continue`. |
| `Module-3/while_loop.c` | Prints numbers from 1 to 20 using a `while` loop. |
| `Practice/1.c` | Prints `I Love Practice`. |
| `Practice/2.c` | Reads two integers and prints their sum. |
| `Practice/3.c` | Reads a number and prints `I Love Practice` that many times using a `for` loop. |
| `exam/Print_It.c` | Prints a multi-line message with escape sequences and a percent sign. |
| `exam/Multiply.c` | Reads two long long integers and prints their product. |
| `exam/Divisible.c` | Checks whether one number is divisible by another. |
| `codeforces/module-4/problem1.c` | Reads two integers and prints `Yes` if the first number is greater than or equal to the second. |
| `codeforces/module-4/problem2.c` | Reads two integers and checks whether either number is a multiple of the other. |
| `codeforces/module-4/problem3.c` | Reads a letter and changes it between lowercase and uppercase. |
| `codeforces/module-4/problem4.c` | Reads a four-digit number and prints whether the first digit is even or odd. |
| `codeforces/module-4/problem5.c` | Reads a character and checks whether it is a digit, capital letter, or small letter. |
| `codeforces/module-5/B_Even_Numbers.c` | Reads `n` and prints all even numbers from `1` to `n`; prints `-1` when `n` is `1`. |
| `codeforces/module-5/C_Even_Odd_Positive_and_Negative.c` | Reads `n` numbers and counts how many are even, odd, positive, and negative. |
| `codeforces/module-5/D_Fixed_Password.c` | Reads password attempts, prints `Wrong` until `1999` is entered, then prints `Correct`. |
| `codeforces/module-5/E_Max.c` | Reads `n` numbers and prints the maximum value. |
| `codeforces/module-5/F_Multiplication_table.c` | Reads a number and prints its multiplication table from `1` to `12`. |

## How to Compile and Run

Make sure GCC is installed, then run a C file from its folder.

Example:

```bash
cd Module-2
gcc arithmetic.c -o arithmetic.exe
./arithmetic.exe
```

To read input from `input.txt` and save output in `output.txt`:

```bash
./conditional.exe < input.txt > output.txt
```

## Example Output

From `Module-1/limiations.c`:

```text
32422.123456
```

From `Module-2/arithmetic.c` with `a=3`, `b=20`:

```text
The sum of a and b is 23
The difference of a and b is -17
The product of a and b is 60
The quotient of a and b is 6.666667
The remainder of a and b is 2
```

From `Module-2/conditional.c` with input `100`:

```text
I will buy a shirt
```

From `Module-2/conditional2.c` with input `8000`:

```text
I will buy a laptop
I will buy a mobile
```

From `Module-3/loop_1.c`:

```text
1
3
5
7
9
```

From `Module-3/loop_sum.c` with input `10`:

```text
The sum is 55
```

From `Module-3/Break.c`:

```text
1
2
3
4
5
```

From `Module-3/continue.c`:

```text
1
2
3
4
6
7
8
9
10
```

From `Module-3/while_loop.c`:

```text
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
```

From `Practice/3.c` with input `2`:

```text
I Love Practice
I Love Practice
```

From `exam/Print_It.c`:

```text
Hello, world! I am learning C programming language. ^_^
Programming is fun and challenging. /\ /\ /\
I want to give my 100% dedication to learn!	I will succeed one day.
```

From `exam/Multiply.c` with input `10 20`:

```text
200
```

From `codeforces/module-4/problem1.c` with input `5 7`:

```text
No
```

From `codeforces/module-4/problem2.c` with input `12 5`:

```text
No Multiples
```

From `codeforces/module-4/problem3.c` with input `W`:

```text
w
```

From `codeforces/module-4/problem4.c` with input `4569`:

```text
EVEN
```

From `codeforces/module-4/problem5.c` with input `a`:

```text
ALPHA
IS SMALL
```

From `codeforces/module-5/B_Even_Numbers.c` with input `10`:

```text
2
4
6
8
10
```

From `codeforces/module-5/C_Even_Odd_Positive_and_Negative.c` with input `5` followed by `-5 0 -3 -4 12`:

```text
Even: 3
Odd: 2
Positive: 1
Negative: 3
```

From `codeforces/module-5/D_Fixed_Password.c` with input `2200`, `1020`, then `1999`:

```text
Wrong
Wrong
Correct
```

From `codeforces/module-5/E_Max.c` with input `5` followed by `1 8 3 6 4`:

```text
8
```

From `codeforces/module-5/F_Multiplication_table.c` with input `5`:

```text
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
5 * 11 = 55
5 * 12 = 60
```

## Notes

This is a beginner learning repository, so files are organized by module and topic. Compiled `.exe` files are generated when running programs locally. More C practice programs will be added as learning continues.
