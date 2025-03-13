# Push_swap

## Description

The **push_swap** project is a sorting algorithm challenge in C. The goal is to sort a stack of integers using a limited set of operations while aiming for the minimum number of moves. This project focuses on algorithm efficiency, problem-solving, and data structure manipulation.

## Rules

- You have two stacks: `a` and `b`.
- At the beginning:
  - Stack `a` contains a set of unique positive and/or negative integers.
  - Stack `b` is empty.
- The goal is to sort `a` in ascending order using the allowed operations.

## Allowed Operations

| Operation | Description |
|-----------|-------------|
| `sa` | Swap the first two elements of stack `a` |
| `sb` | Swap the first two elements of stack `b` |
| `ss` | Perform `sa` and `sb` simultaneously |
| `pa` | Push the top element from `b` to `a` |
| `pb` | Push the top element from `a` to `b` |
| `ra` | Rotate `a` upwards (first element becomes last) |
| `rb` | Rotate `b` upwards (first element becomes last) |
| `rr` | Perform `ra` and `rb` simultaneously |
| `rra` | Reverse rotate `a` (last element becomes first) |
| `rrb` | Reverse rotate `b` (last element becomes first) |
| `rrr` | Perform `rra` and `rrb` simultaneously |

## Program Requirements

- The program must be called `push_swap`.
- It must receive a list of integers as arguments, which will be placed in `a`.
- It should output the shortest possible sequence of operations needed to sort `a`.
- Operations must be printed one per line.
- The sorting must be performed using the fewest possible moves.
- If no parameters are given, the program should not output anything.
- In case of an error (e.g., non-integer arguments, duplicates, out-of-range values), the program must print `Error` to standard error.

## Project Rules

- The code must follow the **42 Norm**.
- The `Makefile` must contain the rules: `all`, `clean`, `fclean`, and `re`.
- Only the functions **read**, **write**, **malloc**, **free**, **exit**, and **ft_printf (or equivalent self-coded functions)** are allowed.
- Global variables are forbidden.

## Author

Pedro Cristóvão Veiga Correia

