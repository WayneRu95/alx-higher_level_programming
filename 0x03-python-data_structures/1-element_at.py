#!/bin/bash/python3
def element_at(my_list, idx):
    ***Function that retrieves an element from a list like in C***
    for x in my_list:
        if idx == my_list.index(x):
            return(x)
        elif idx > len(my_list):
            return None 
        elif idx < 0:
            return None
