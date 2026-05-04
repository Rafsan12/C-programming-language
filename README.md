# C Programming Language

This repository contains my C programming practice files from Phitron. It includes setup programs, basic print statements, variables, formatted input/output, and simple examples with different numeric data types.

## Folder Structure

```text
C/
+-- setup/
|   +-- hello.c
|   +-- input.txt
|   +-- output.txt
+-- Mobule-1/
    +-- print.c
    +-- variable.c
    +-- output.c
    +-- limiations.c
    +-- input.txt
    +-- output.txt
```

## Topics Covered

- Basic C program structure
- `printf()` output
- `scanf()` input
- Integer, float, double, and character variables
- Format specifiers such as `%d`, `%f`, `%lf`, and `%%`
- Compiling and running C programs with GCC
- Using `input.txt` and `output.txt` for program input/output

## Practice Files

| File | Description |
| --- | --- |
| `setup/hello.c` | First setup program that prints `Hello world`. |
| `Mobule-1/print.c` | Basic `printf()` example. |
| `Mobule-1/variable.c` | Demonstrates integer, float, and character variables. |
| `Mobule-1/output.c` | Reads and prints numbers with percent signs. |
| `Mobule-1/limiations.c` | Demonstrates larger numeric values and double precision output. |

## How to Compile and Run

Make sure GCC is installed, then run a C file from its folder.

Example:

```bash
cd Mobule-1
gcc variable.c -o variable.exe
./variable.exe
```

To read input from `input.txt` and save output in `output.txt`:

```bash
./output.exe < input.txt > output.txt
```

## Example Output

From `Mobule-1/limiations.c`:

```text
32422.123456
```

From `Mobule-1/output.c` with input `10% 20%`:

```text
10% 20%
```

## Notes

This is a beginner learning repository, so files are organized by module and topic. Compiled `.exe` files are generated when running programs locally. More C practice programs will be added as learning continues.
