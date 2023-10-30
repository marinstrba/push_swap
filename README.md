# Push_Swap Project Description

## Overview
The Push Swap project is a classic algorithm challenge focusing on data sorting, with the twist of having a restricted set of operations and data structures. The primary goal of this project is to write a program named `push_swap` in C, which calculates and outputs the smallest possible sequence of operations that sorts a given set of integers using two stacks and a specific set of instructions.

## Objectives
The key objectives of this project are to:

1. Enhance the understanding and application of sorting algorithms.
2. Develop a strong grasp of algorithmic complexity and its practical implications.
3. Improve proficiency in C programming language.
4. Sharpen problem-solving skills by dealing with constraints and optimization problems.

## How it Works
The program takes in a list of integers as arguments and uses two stacks, `stack_a` and `stack_b`, along with a specific set of instructions to sort the numbers in ascending order. The goal is to find the most efficient sequence of operations that accomplishes this task, with efficiency being measured by the number of operations used.

## Instructions Set
The available operations for manipulating the stacks are:

- `sa` (swap a): Swap the first two elements at the top of stack a.
- `sb` (swap b): Swap the first two elements at the top of stack b.
- `ss` (swap both): `sa` and `sb` at the same time.
- `pa` (push a): Take the first element at the top of stack b and put it at the top of stack a.
- `pb` (push b): Take the first element at the top of stack a and put it at the top of stack b.
- `ra` (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.
- `rb` (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.
- `rr` (rotate both): `ra` and `rb` at the same time.
- `rra` (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.
- `rrb` (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.
- `rrr` (reverse rotate both): `rra` and `rrb` at the same time.

## Implementation
The implementation details and source code can be found in the repository. Feel free to explore, test, and provide feedback.

Happy Coding!