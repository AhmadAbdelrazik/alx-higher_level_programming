#!/usr/bin/python3
import hidden_4

if __name__ == "__main__":
    ls = dir(hidden_4)
    print(ls)
    for i in ls:
        if i[:2] != '__':
            print(i)
