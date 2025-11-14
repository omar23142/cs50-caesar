# Caesar Cipher (CS50)

A simple C program that implements the classic **Caesar cipher**.  
This project was written as part of the CS50 exercises.

## Description

The program:
- Accepts a single numeric command-line argument `key`.
- Prompts the user for `plaintext`.
- Shifts each alphabetical character in `plaintext` by `key` positions (wrapping around A–Z or a–z).
- Preserves letter case and leaves non-letter characters unchanged.
- Prints the resulting `ciphertext`.

## Features

- Validates that the command-line key contains only digits.
- Uses modular arithmetic to wrap shifts within the alphabet.
- Keeps punctuation, digits, and whitespace unchanged.

## Files

caesar.c
README.md

powershell
Copy code

## Compilation

If using the CS50 library:

```bash
clang -o caesar caesar.c -lcs50
./caesar 3
Or compile with gcc (replace -lcs50 if you remove CS50 functions):

bash
Copy code
gcc -o caesar caesar.c -lcs50
./caesar 3
Usage
bash
Copy code
./caesar key
Example:

makefile
Copy code
$ ./caesar 1
plaintext: Hello, World!
ciphertext: Ifmmp, Xpsme!

Author
 Omar Almughawish
