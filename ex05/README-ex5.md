# Exercise 05 — Days of the Month

## Problem Summary
The task was to ask the user to enter a month number (1–12) and then display how many days are in that month.

## Input / Output
Input: a number from the user representing a month (1 to 12)
Output: a message showing how many days that month has (28, 30, or 31)

## Approach
I used a simple if–else structure to check which month the user typed.
February (2) has 28 days
Months with 30 days are: 4, 6, 9, 11
All other valid months have 31 days
If the user enters a number less than 1 or more than 12, the program tells them it is an invalid month.

## Example
Input/Output example:

User enters: 2 → Output: February has 28 days.
User enters: 11 → Output: Month 11 has 30 days.
User enters: 13 → Output: Invalid month number.

## Test Cases
This exercise helped me practise using if/else statements, working with numbers, and understanding how to handle different conditions based on user input. It also helped me get used to checking for invalid input.