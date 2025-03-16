# Stack Shuffle

## Description
Stack Shuffle is a console-based puzzle game implemented in C that involves stack operations. The game allows players to manipulate stacks of characters by performing push and pop operations between different test stacks. The objective is to move elements strategically while adhering to stack constraints.

## Features
- Implements stack data structure using arrays.
- Allows users to pop and push elements between different test stacks.
- Simple text-based interface.
- Enhances logical thinking and understanding of stack operations in C.

## How to Play
1. The game displays an initial set of test stacks with characters.
2. The player is prompted to select a test number to pop an element from.
3. The player then chooses a target test stack to push the popped element into.
4. The game updates the stacks accordingly and displays the modified stacks.
5. The process repeats until all moves are exhausted.

## Compilation & Execution
To compile and run the program, use the following commands:
```sh
gcc stack_shuffle.c -o stack_shuffle
./stack_shuffle
```

## Example Output
```
TEST    1   2   3   4   5

        A   E   D   -   -
        B   C   B   -   -
        C   D   E   -   -
        D   A   C   -   -
        E   E   A   -   -

ENTER A TEST NO. TO POP : 1

ENTER TEST NO. TO PUSH A CHARACTER FROM TEST : 2

Updated Stacks:
TEST    1   2   3   4   5

        A   E   D   -   -
        B   C   B   -   -
        C   D   E   -   -
        D   A   C   -   -
        -   E   A   -   -
```

## Contributions
Contributions are welcome! If you find any issues or improvements, feel free to open a pull request.

## License
This project is licensed under the MIT License.

