# C Programming Language

This repository contains my C programming practice files from Phitron. It includes setup programs, basic print statements, variables, formatted input/output, arithmetic operations, conditional statements, and loop examples.

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
    +-- 1.c
    +-- 2.c
    +-- 3.c
    +-- input.txt
    +-- output.txt
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

## Notes

This is a beginner learning repository, so files are organized by module and topic. Compiled `.exe` files are generated when running programs locally. More C practice programs will be added as learning continues.
