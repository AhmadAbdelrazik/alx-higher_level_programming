#!/usr/bin/python3
def roman_to_int(roman_string):
    if roman_string is None or roman_string == "":
        return 0

    ans = 0
    i = 0

    while i < len(roman_string) and roman_string[i] == "M":
        ans += 1000
        i += 1

    while i < len(roman_string) and roman_string[i] in "CDM":
        if roman_string[i] == "D":
            ans += 500 if i == 0 or roman_string[i - 1] != "C" else 300
        elif roman_string[i] == "M":
            ans += 1000 if i == 0 or roman_string[i - 1] != "C" else 800
        else:
            ans += 100
        i += 1

    while i < len(roman_string) and roman_string[i] in "XLC":
        if roman_string[i] == "L":
            ans += 50 if i == 0 or roman_string[i - 1] != "X" else 30
        elif roman_string[i] == "C":
            ans += 100 if i == 0 or roman_string[i - 1] != "X" else 80
        else:
            ans += 10
        i += 1

    while i < len(roman_string) and roman_string[i] in "IVX":
        if roman_string[i] == "V":
            ans += 5 if i == 0 or roman_string[i - 1] != "I" else 3
        elif roman_string[i] == "X":
            ans += 10 if i == 0 or roman_string[i - 1] != "I" else 8
        else:
            ans += 1
        i += 1

    return ans
