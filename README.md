# Vigenère Cipher Encryption/Decryption Program

## General Description
This project implements a classical Vigenère cipher encryption and decryption program using C++. The Vigenère cipher is a method of encrypting alphabetic text by using a series of letters from a keyword. The program allows users to input a plaintext message and a keyword, then outputs the corresponding ciphertext. It also decrypts the ciphertext back to the original plaintext, demonstrating the complete encryption/decryption process.

This project serves both educational and functional purposes, showcasing how **modular arithmetic, sequences, and discrete structures** can be applied to solve real-world problems like data confidentiality.

---

## Programming Approaches
- Modular Arithmetic: Letters are mapped to numbers (A=0 … Z=25) and encrypted/decrypted using modulo 26 arithmetic.
- Sequences and Loops: Each character in the input text is processed sequentially, applying the encryption or decryption formula.
- Decision-Making/Branching: Non-alphabetic characters are left unchanged using conditional checks.
- Functions: Separate functions are implemented for encryption (`vigenereEncrypt`) and decryption (`vigenereDecrypt`) to make the program modular and reusable.
- User Interaction: The program interacts with the user through console input and output, prompting for plaintext and keyword, and displaying ciphertext and decrypted text.

---

## Authors
- Joshua Lozano

---

## Date Published
December 18, 2025

---

## Basic Instructions
1. Compile the program using a C++ compiler
