# C Programming Language

This repository contains my C programming practice files from Phitron. It includes setup examples, basic print statements, variables, and generated output files.

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
    +-- input.txt
    +-- output.txt
```

## Topics Covered

- Basic C program structure
- `printf()` output
- Integer, float, and character variables
- Compiling and running C programs
- Using `input.txt` and `output.txt` for program input/output

## How to Compile and Run

Make sure GCC is installed, then run a C file from its folder.

Example:

```bash
cd Mobule-1
gcc variable.c -o variable.exe
./variable.exe
```

To save output in `output.txt`:

```bash
./variable.exe > output.txt
```

## Example Output

```text
The value of raj is: 100
The value of pi is: 3.14
The grade is: A
```

## Notes

This is a beginner learning repository, so files are organized by module and topic. More C practice programs will be added as learning continues.
