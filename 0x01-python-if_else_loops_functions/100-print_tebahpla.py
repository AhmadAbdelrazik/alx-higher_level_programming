#!/usr/bin/python3
for ch in range(ord('z'), ord('a') - 1, -1):
    print("{}".format(chr(ch + (ord('A') - ord('a')) * (ch % 2))), end="")
