#!/usr/bin/python3
def uppercase(str):
    str = str + '\n'
    for i in str:
        if ord(i) >= ord('a') and ord(i) <= ord('z'):
            print("{}".format(chr(ord(i) - ord('a') + ord('A'))), end="")
        else:
            print("{}".format(i), end="")
