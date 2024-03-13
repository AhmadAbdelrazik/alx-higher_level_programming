#!/usr/bin/python3
def uppercase(str):
    str = str + '\n'
    for i in str:
        if ord(i) >= ord('a') and ord(i) <= ord('z'):
            # print(chr(ord(i) - ord('a') + ord('A')), end="")
            print(f"{chr(ord(i) - ord('a') + ord('A'))}",end="")
        else:
            # print(i, end="")
            print(f"{i}", end="")
