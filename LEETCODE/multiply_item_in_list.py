"""Write a Python program to multiply all the items in a list."""

def multiply_item_in_list(n):
    lists = []

    for i in range(n):
        list = int(input(f"enter an element {i+1}:"))
        lists.append(list)
    
    print(lists)
    factor = 1
    for i in lists:
       factor = factor * i
    
    print(factor)

multiply_item_in_list(4)