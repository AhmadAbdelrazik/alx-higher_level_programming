#!/usr/bin/python3
def print_last_digit(number):
    if number > 0:
        print(f"{number % 10}", end="")
        return (number % 10)
    elif number < 0:
        print(f"{10 - number % 10}", end="")
        return (10 - number % 10)
    else:
        print("0", end="")
        return (0)
