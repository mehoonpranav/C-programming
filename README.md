# C Programming Lab Programs

Programs written while going through the four units of the college syllabus.
Every file is a standalone example of one topic, in the order the topics were taught.

## How to compile and run

Single file:

```
gcc filename.c -o filename
./filename          (Windows: filename.exe)
```

Two files that have to be linked together (Program 5 and Program 38):

```
gcc main.c shapes.c -o linker_demo
gcc main.c counter.c -o extern_demo
```

The pairing is written at the top of each file's comments as well.

---

## Module 1 - Introduction to Programming Languages and C

| File | Topic |
|------|-------|
| `Module 1/01_hello_world.c` | Structure of a C program, `#include`, `main()`, `printf()` |
| `Module 1/02_tokens_and_data_types.c` | Tokens, `int` `char` `float` `double` `long`, `sizeof` |
| `Module 1/03_formatted_io.c` | `scanf()` and `printf()` with format specifiers, field width |
| `Module 1/04_unformatted_io.c` | `getchar()` and `putchar()`, reading until newline |
| `Module 1/05_linker_demo/` | Separate compilation, declaration vs definition, what the linker does |
| `Module 1/06_algorithm_to_program.c` | Algorithm, pseudocode and flowchart turned into C |
| `Module 1/07_syntax_vs_semantic_error.c` | Syntax error vs semantic error, integer division trap |

## Module 2 - Expressions, Statements, Arrays and Strings

| File | Topic |
|------|-------|
| `Module 2/01_arithmetic_operators.c` | Arithmetic, modulus, relational operators |
| `Module 2/02_assignment_and_comma.c` | Compound assignment, comma operator, precedence |
| `Module 2/03_ternary.c` | Conditional operator, nested ternary |
| `Module 2/04_logical_relational.c` | `&&` `\|\|` `!`, short circuit evaluation |
| `Module 2/05_type_conversion.c` | Implicit and explicit conversion, mixed operands |
| `Module 2/06_if_else.c` | Simple `if` / `else` |
| `Module 2/07_else_if_ladder.c` | `else if` ladder, grade calculation |
| `Module 2/08_nested_if.c` | Nested `if` |
| `Module 2/09_switch.c` | `switch`, `case`, `break`, `default` |
| `Module 2/10_break_continue.c` | `break` and `continue` inside loops |
| `Module 2/11_for_loop.c` | Counted (deterministic) loop |
| `Module 2/12_while_loop.c` | `while`, loop with unknown count |
| `Module 2/13_do_while.c` | `do while`, body runs at least once |
| `Module 2/14_nested_loop.c` | Nested loops, patterns |
| `Module 2/15_read_write_char.c` | Reading and writing a single character |
| `Module 2/16_array_basics.c` | 1-D array declaration, initialization, traversal |
| `Module 2/17_array_operations.c` | Reverse, search, partial initialization |
| `Module 2/18_2d_array.c` | 2-D array declaration, initialization, row sums |
| `Module 2/19_matrix_operations.c` | Matrix addition and transpose |
| `Module 2/20_matrix_multiplication.c` | Matrix multiplication with three loops |
| `Module 2/21_string_basics.c` | String declaration, initialization, `%s` input, null terminator |
| `Module 2/22_char_arithmetic.c` | Arithmetic on characters, `fgets()`, case conversion |
| `Module 2/23_string_functions.c` | `strlen` `strcpy` `strcat` `strcmp` `strchr` `strstr` and manual versions |

## Module 3 - Functions and Pointers

| File | Topic |
|------|-------|
| `Module 3/01_function_basics.c` | Declaration, definition, calling a function |
| `Module 3/02_call_by_value.c` | Call by value, copies of arguments |
| `Module 3/03_function_return_values.c` | Function returning a value, `isPrime()` |
| `Module 3/04_recursion_factorial.c` | Recursion, base case, factorial and Fibonacci |
| `Module 3/05_tower_of_hanoi.c` | Tower of Hanoi |
| `Module 3/06_scope_local_global.c` | Local vs global scope, shadowing, block scope |
| `Module 3/07_storage_classes.c` | `auto`, `register`, `static` |
| `Module 3/08_extern_demo/` | `extern`, sharing a variable across two files |
| `Module 3/09_formatted_input_output.c` | `printf` flags, `sprintf`, `sscanf` |
| `Module 3/10_pointer_basics.c` | Pointer declaration, `&` and `*` |
| `Module 3/11_pointer_arithmetic.c` | Pointer arithmetic, scaling, pointer difference |
| `Module 3/12_pointer_aliasing.c` | Aliasing, two pointers on the same object |
| `Module 3/13_call_by_reference.c` | Passing addresses, `swap()`, multiple outputs |
| `Module 3/14_pointer_string.c` | Walking a string with a `char *` |

## Module 4 - Structures, Unions, Enumeration and Typedef

| File | Topic |
|------|-------|
| `Module 4/01_structure_basics.c` | Defining, declaring, initializing a structure, `sizeof` |
| `Module 4/02_structure_operations.c` | Reading members, modifying, passing to functions |
| `Module 4/03_nested_structure.c` | Structure inside a structure |
| `Module 4/04_array_of_structures.c` | Array of structures, searching, topper |
| `Module 4/05_union_basics.c` | Union declaration, one member at a time |
| `Module 4/06_structure_vs_union.c` | Structure and union side by side, memory comparison |
| `Module 4/07_enum_demo.c` | `enum`, explicit values, switch on enum |
| `Module 4/08_typedef_demo.c` | `typedef` with basic types, struct, enum, function pointer |

---

Notes to self:

- `void main()` is never used, `int main(void)` and `return 0` are used
  everywhere.
- `gets()` is avoided because it cannot limit how much it reads.
- Input is always read with a width limit for strings (`%29s`) so a long
  entry cannot overflow the array.
