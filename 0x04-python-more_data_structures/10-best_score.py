#!/usr/bin/python3
def best_score(a_dictionary):
    val = float("-inf")
    ans = ""
    for key, value in a_dictionary.items():
        if value > val:
            val = value
            ans = key

    return ans
