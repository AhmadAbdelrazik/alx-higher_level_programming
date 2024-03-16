#!/usr/bin/python3
import hidden_4
ls = dir(hidden_4)
print(ls)
for i in ls:
    if i[:2] != '__':
        print(i)
