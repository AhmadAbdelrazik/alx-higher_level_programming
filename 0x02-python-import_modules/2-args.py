#!/usr/bin/python3
from sys import argv as argv

if __name__ == "__main__":
    if len(argv) == 1:
        print("0 arguments.")
    else:
        if len(argv) == 2:
            print("1 argument:")
        else:
            print(str(len(argv) - 1), "arguments:")

        for i in range(len(argv) - 1):
            print(str(i+1) +":", argv[i+1])
