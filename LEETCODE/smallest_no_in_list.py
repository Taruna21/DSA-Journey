"""Write a Python program to get the smallest number from a list."""


def smallest_num_in_list(n):
    lists = []

    for i in range(n):
        list = int(input(f"enter an element {i+1}:"))
        lists.append(list)
    print(lists)

    mini = float('inf')
    for i in lists:
        if i < mini:
            mini = i
    print(mini)

        
smallest_num_in_list(3)