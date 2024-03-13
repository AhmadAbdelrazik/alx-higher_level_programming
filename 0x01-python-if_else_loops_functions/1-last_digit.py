#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number < 0:
    print(f"Last digit of {number:d} is {(number % 10) - 10} and is", end=" ")
    if number % 10 != 0:
        print("less than 6 and not 0")
    else:
        print("0")
else:
    print(f"Last digit of {number:d} is {(number % 10)} and is", end=" ")
    if number % 10 < 6 and number % 10 != 0:
        print("less than 6 and not 0")
    elif number % 10 > 5:
        print("greater than 5")
    else:
        print("0")
