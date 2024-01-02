#!/usr/bin/python3
import random

number = random.randint(-10000, 10000)

# Get the last digit of the number
last_digit = abs(number) % 10

# Check if the last digit is greater than 5, equal to 0, or less than 6 and not 0
if last_digit > 5:
    print("The string Last digit of", number, "is", last_digit, "and is greater than 5")
elif last_digit == 0:
    print("The string Last digit of", number, "is", last_digit, "and is 0")
else:
    print("The string Last digit of", number, "is", last_digit, "and is less than 6 and not 0")
