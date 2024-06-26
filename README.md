# 🦊 What is Push Swap?

A sorting algorithm program that sorts a random amount of numbers with the least moves possible, using two different stacks (A and B).
- Stack A: Stores every `value` and `index` given.
- Stack B: Empty, used for moves only.

I decided to go with **Radix** for its *simplicity/efficiency* ratio. Since we use **bit shifting** with Radix, I assigned to each and every **value** an accending **index** starting at 0 to the lowest value, increasing all the way to the highest.
That way, even a big numbers will in reality have a small index, allowing the algorithm to run with a lesser amount of moves.

# ⚒️ Compilation

1. Run `make` to compile the program.
Run `make re` to recompile everything.
2. Run `./push_swap <args>` to execute the program.

### Rules for `<args>`:
- Needs more than one argument.
- Can only contain integers.
- Can't have duplicates.
- Needs to be between -2147483648 and 2147483647.

### Commands:
- ./push_swap "69 42 777 420 23"
- ./push_swap 69 42 777 420 23
<br />

- ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l `display the amount of moves`
- ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG `display if sorted`

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

## 1. Parsing

- [x] [`parser`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/parsing/parser.c) - Goes through all the arguments to see if everything can be processed further. Displays an error message and exits the program otherwise.
- [x] [`isnumber`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/parsing/isnumber.c) - Boolean that checks if args only has correct numbers.
- [x] [`isoverflow`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/parsing/isoverflow.c) - Boolean that checks for any overflow.
- [x] [`isduplicate`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/parsing/isduplicate.c) - Boolean that checks if any arg appears twice.

## 2. Stacks

- [x] [`init_stack`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/init_stack.c) - Initializes a linked list named "Stack A", which stores every input.
- [x] [`init_index`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/init_index.c) - Assigns an accending index to every nodes of "Stack A".

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
- [x] [`issorted`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/sorting/issorted.c) - Boolean that checks if the Stack A is sorted.
- [x] [`simple_sort`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/sorting/simple_sort.c) - Sorts between 3 to 5 numbers:
- 3 numbers: `1~2 moves`
- 4 numbers: `3~5 moves`
- 5 numbers: `5~10 moves`
- [x] [`radix_sort`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/sorting/radix_sort.c) - Sorts any amount of numbers:
- 10 numbers: `63 moves`
- 100 numbers: `1081 moves`
- 500 numbers: `6778 moves`
- 1 000 numbers: `15062 moves`

## X. Utils
- [x] [`ft_countwords`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/utils/ft_countwords.c) - Counts the number of words in a string.
- [x] [`ft_split`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/utils/ft_split.c) - Seperates a string into an array of strings.
- [x] [`ft_strcmp`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/utils/ft_strcmp.c) - Checks for a difference between two strings.
- [x] [`ft_atoi`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/utils/ft_atoi.c) - Converts a string into an integer.
- [x] [`ft_lstnew`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/utils/ft_lstnew.c) - Creates and allocates a new list.
- [x] [`ft_lstlast`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/utils/ft_lstlast.c) - Returns the last element of a list.
- [x] [`ft_lstsize`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/utils/ft_lstnew.c) - Returns the size of a list.
- [x] [`ft_lstfree`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/utils/ft_lstfree.c) - Frees a list and its elements.
