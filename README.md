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
![pa pb](https://user-images.githubusercontent.com/102475281/218693997-ef4d6bf0-32d6-4bf0-9258-0046636f90f3.png)
![ra rb rr](https://user-images.githubusercontent.com/102475281/218694219-9eb63908-86d2-4681-a4eb-e90d77adebe4.png)
![rra rrb rrr](https://user-images.githubusercontent.com/102475281/218694246-2c81b681-f5d4-4347-8df7-17b9ca9ac012.png)
![sa sb ss](https://user-images.githubusercontent.com/102475281/218694295-72c664d0-e8f0-4fa4-af5b-875c21b87985.png)
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

