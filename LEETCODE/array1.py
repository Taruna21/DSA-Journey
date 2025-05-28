"""Write a Python program to sum all the items in a list"""

def sum_of_list(n):
    nums = [ ]
    for i in range(n):
        num = int(input(f"enter element{i+1}:"))
        nums.append(num)

                         
                         
    sum = 0
    for i in nums:
        sum = sum + i
    print(sum)
sum_of_list(5)

