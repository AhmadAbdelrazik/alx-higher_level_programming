#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary is None:
        return None
    val = float("-inf")
    ans = None
    for key, value in a_dictionary.items():
        if value > val:
            val = value
            ans = key

    return ans
