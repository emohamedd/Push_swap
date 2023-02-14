# Push_swap Project

## Introduction
Push_swap is a project that requires to sort data on a stack, with a limited set of operations, using the lowest possible number of actions.

## Requirements
* GCC 
* make
* libft

## Compiling
To compile the project, run the following command: make

This will compile two executables: `push_swap` and `checker`.

## Usage
### push_swap
The `push_swap` executable takes a list of integers as an argument and outputs a list of operations that sorts the list.

Example usage: ./push_swap 2 1 3
Output:
sa
rra

### checker
The `checker` executable takes a list of integers as an argument and allows you to apply operations to the list to check if it is correctly sorted.

Example usage: ./checker 2 1 3  
You can now apply operations, for example:
sa
rra


When you are finished, send an EOF signal (ctrl+D) to check if the list is sorted.

## Operations
The following operations are allowed:
* `sa`: swap the first two elements of stack `a`.
* `sb`: swap the first two elements of stack `b`.
* `ss`: `sa` and `sb` at the same time.
* `pa`: take the first element at the top of `b` and put it at the top of `a`.
* `pb`: take the first element at the top of `a` and put it at the top of `b`.
* `ra`: rotate `a` - shift up all elements of stack `a` by 1.
* `rb`: rotate `b` - shift up all elements of stack `b` by 1.
* `rr`: `ra` and `rb` at the same time.
* `rra`: reverse rotate `a` - shift down all elements of stack `a` by 1.
* `rrb`: reverse rotate `b` - shift down all elements of stack `b` by 1.
* `rrr`: `rra` and `rrb` at the same time.

## Notes
* The integers must be unique.
* Both stacks start empty.
* The goal is to sort `a` in ascending order and to have an empty `b`.





