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
    +-- loop_1.c
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
| `Module-3/loop_1.c` | Prints numbers from 1 to 10 using a `for` loop. |

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
2
3
4
5
6
7
8
9
10
```

## Notes

This is a beginner learning repository, so files are organized by module and topic. Compiled `.exe` files are generated when running programs locally. More C practice programs will be added as learning continues.
