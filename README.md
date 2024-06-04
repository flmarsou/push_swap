# 🦊 What is Push Swap?

WIP

# ⚒️ Compilation

1. Run `make` to compile the program.
Run `make re` to recompile everything.
2. Run `./push_swap <args>` to execute the program.

### Rules for `<args>`:
- Needs more than one argument/number.
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

- [x] [`parser`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/parsing/parser.c) - Goes through all the arguments to see if everything can be processed further.
- [x] [`isnumber`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/parsing/isnumber.c) - Boolean that checks if args only has numbers.
- [x] [`isduplicate`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/parsing/isduplicate.c) - Boolean that checks if any arg appears twice.
- [x] [`isoverflow`](https://github.com/flmarsou/3.1-push_swap/blob/main/src/parsing/isoverflow.c) - Boolean that checks for any overflow.
