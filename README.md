# Find the Largest Number Among Four Numbers

This C program allows the user to input four integers and finds the largest number among them. It uses basic conditional statements (`if` conditions) to compare the numbers and outputs the largest one.

## How It Works

1. The program first prompts the user to input four integers (`a`, `b`, `c`, and `d`).
2. Initially, it assumes the fourth number (`d`) is the largest.
3. The program then compares each of the other numbers (`a`, `b`, `c`) with the current largest number.
4. If a number is found to be larger than the current largest, it updates the largest.
5. After all comparisons, the program outputs the largest number.

## Requirements

- C compiler (e.g., GCC)
- Basic knowledge of C programming and terminal usage

## How to Compile and Run

1. Save the code in a file, for example, `largest_number.c`.
2. Open a terminal and navigate to the folder where the file is saved.
3. Compile the program using the following command:
   ```bash
   gcc largest_number.c -o largest_number
   ```
4. Run the compiled program:
   ```bash
   ./largest_number
   ```

## Example Usage

After running the program, the user will be prompted to enter four numbers.

```
Enter four numbers:
Enter number a: 4
Enter number b: 12
Enter number c: 17
Enter number d: 3
The largest number among them is 17
```

## License

This is a simple educational project. Feel free to modify and distribute it.
