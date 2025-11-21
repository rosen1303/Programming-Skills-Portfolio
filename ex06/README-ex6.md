# Exercise 06 — Brute Force Attack

## Problem Summary
This program asks the user to enter a password. If the password is wrong, the program keeps asking until the correct one is typed.

## Input / Output
Input: the user’s password guess

Output: “Wrong password” message until correct input, then “Access granted”

## Approach
I used a while loop to repeat asking for the password until the user enters the correct one.
The program compares the guess with the real password using a simple code.
When the guess matches the password, the loop ends and the program prints a success message.

## Example
Example run:
Enter the password: test
Wrong password. Try again: hello
Wrong password. Try again: Break-in
Access granted!

## Reflection
This exercise helped me understand while loops and conditions. I learned how to repeat code until a specific condition becomes true. It also helped me practise comparing strings and using loops to control program flow.