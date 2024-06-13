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

---

# 📑 List of Functions

## 1. Parsing

- [x] [`parser`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/parsing/parser.c) - Goes through all the arguments to see if everything can be processed further. Displays an error message and exits the program otherwise.
- [x] [`isnumber`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/parsing/isnumber.c) - Boolean that checks if args only has numbers.
- [x] [`isduplicate`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/parsing/isduplicate.c) - Boolean that checks if any arg appears twice.
- [x] [`isoverflow`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/parsing/isoverflow.c) - Boolean that checks for any overflow.

## 2. Stacks

- [x] [`init_stack`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/init_list.c) - Initializes a linked list named "Stack A", which stores every input.
- [x] [`free_stack`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/init_list.c) - Frees a given linked list at the end of the program.

## 3. Moves

- [x] [`sa`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/moves/sa.c) `Swap A` -> Swap the first 2 elements at the top of Stack A.
- [x] [`sb`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/moves/sb.c) `Swap B` -> Swap the first 2 elements at the top of Stack B.
- [x] [`ss`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/lists/moves/ss.c) -> `sa` and `sb` at the same time.
