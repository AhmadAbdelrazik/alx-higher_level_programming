#!/usr/bin/python3
def weight_average(my_list=[]):
    if my_list == []:
        return 0
    nominator = 0
    denominator = 0
    for val in my_list:
        nominator += val[0] * val[1]
        denominator += val[0]
    return nominator / denominator
