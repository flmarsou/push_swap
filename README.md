# 🦊 What is Push Swap?

WIP

# ⚒️ Compilation

1. Run `make` to compile the program.
Run `make re` to recompile everything.
2. Run `./push_swap <args>` to execute the program.

### Rules for `<args>`:
- Needs more than one argument.
- Can only contain integers.
- Can't have duplicates.
- Needs to be between -2147483648 and 2147483647.

### Examples:
- ./push_swap "69 42 777 420 23"
- ./push_swap 69 42 777 420 23

# 🧼 Cleaning

1. Run `make clean` to remove every object files.
2. Run `make fclean` to remove every object files, including the executable.

# ✨ Summary

|     |     |
| --- | --- |
| Program name | push_swap |
| Turn in files | Makefile, *.h, *.c |
| Makefile | NAME, all, clean, fclean, re |
| External functs. | read, write, malloc, free, exit, [`ft_printf`](https://github.com/flmarsou/2.1-ft_printf) |
| Libft authorized | Yes |
| Description | Write a program that sorts a pile of numbers |

# 📑 List of Functions

- [x] [`push_swap`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/push_swap.c) - Main file.

## 1. Parsing

- [x] [`parser`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/parsing/parser.c) - Goes through all the arguments to see if everything can be processed further. Displays an error message and exits the program otherwise.
- [x] [`isnumber`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/parsing/isnumber.c) - Boolean that checks if args only has numbers.
- [x] [`isoverflow`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/parsing/isoverflow.c) - Boolean that checks for any overflow.
- [x] [`isduplicate`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/parsing/isduplicate.c) - Boolean that checks if any arg appears twice.

## 2. Stacks

- [x] [`init_stack`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/init_list.c) - Initializes a linked list named "Stack A", which stores every input.

## 3. Moves

- [x] [`sa`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/moves/sa.c) `Swap A` -> Swap the first 2 elements at the top of Stack A.
- [x] [`sb`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/moves/sb.c) `Swap B` -> Swap the first 2 elements at the top of Stack B.
- [x] [`ss`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/moves/ss.c)‎ -> `sa` and `sb` at the same time.
- [x] [`pa`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/moves/pa.c) `Push A` -> Push the first element at the top of Stack B, and put it at the top of Stack A.
- [x] [`pb`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/moves/pb.c) `Push B` -> Push the first element at the top of Stack A, and put it at the top of Stack B.
- [x] [`ra`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/moves/ra.c) `Rotate A` -> Shift up all elements of Stack A by 1 (the first element becomes the last one).
- [x] [`rb`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/moves/rb.c) `Rotate B` -> Shift up all elements of Stack B by 1 (the first element becomes the last one).
- [x] [`rr`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/moves/rr.c) -> `ra` and `rb` at the same time.
- [x] [`rra`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/moves/rra.c) `Reverse Rotate A` -> Shift down all elements of Stack A by 1 (the last element becomes the first one).
- [x] [`rrb`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/moves/rrb.c) `Reverse Rotate B` -> Shift down all elements of Stack B by 1 (the last element becomes the first one).
- [x] [`rrr`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/moves/rrr.c) -> `rra` and `rrb` at the same time.

## 4. Sorting
- [x] [`sorter`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/sorting/sorter.c) - Parses how many numbers to sort, using the fitting algorithm.
- [x] [`sorted`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/sorting/sorted.c) - Checks if the Stack A is sorted.
- [x] [`sort_two`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/sorting/sort_two.c) - Sorts two numbers: `1 move`
- [x] [`sort_three`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/sorting/sort_three.c) - Sorts three numbers: `1~2 moves`
- [x] [`sort_five`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/sorting/sort_five.c) - Sorts four/five numbers: `4~9 moves`

## X. Utils
- [x] [`ft_countwords`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/utils/ft_countwords.c) - Counts the number of words in a string.
- [x] [`ft_split`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/utils/ft_split.c) - Seperates a string into an array of strings.
- [x] [`ft_strcmp`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/utils/ft_strcmp.c) - Checks for a difference between two strings.
- [x] [`ft_atoi`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/utils/ft_atoi.c) - Converts a string into an integer.
- [x] [`ft_lstnew`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/utils/ft_lstnew.c) - Creates and allocates a new list.
- [x] [`ft_lstlast`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/utils/ft_lstlast.c) - Returns the last element of a list.
- [x] [`ft_lstsize`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/utils/ft_lstnew.c) - Returns the size of a list.
- [x] [`ft_lstfree`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/utils/ft_lstfree.c) - Frees a list and its elements.
