""" Count Strings with Same Start and End"""

"""Write a Python program to count the number of strings from a given list of strings. The string length is 2 or more and the first and last characters are the same.
Sample List : ['abc', 'xyz', 'aba', '1221']
Expected Result : 2"""

def count_string_with_Same_start_end(n):
    lists = []

    for i in range(n):
        list = (input(f"enter an element {i+1}:"))
        lists.append(list)
    print(lists)

    c = 0
    for string in lists:
        if string[0] == string[-1]:
            c = c+1
    print(c)

count_string_with_Same_start_end(5)