"""Write a Python program to get the largest number from a list."""


def largest_num_in_list(n):
    lists = []

    for i in range(n):
        list = int(input(f"enter an element {i+1}:"))
        lists.append(list)
    print(lists)

    maxi = 0
    for i in lists:
        if i > maxi:
            maxi = i
    print(maxi)
        
largest_num_in_list(3)