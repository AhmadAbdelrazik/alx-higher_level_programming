#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    # calculating the argument lengths
    if len(argv) == 1:
        print("0 arguments.")
    elif len(argv) == 2:
        print("1 argument:")
    else:
        print("{} arguments:".format(len(argv) - 1))
    # Printing the arguments

    for i in range(1, len(argv)):
        print("{}: {}".format(i, argv[i]))
