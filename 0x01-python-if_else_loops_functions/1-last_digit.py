#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
last_dig = abs(number) % 10
if last_dig > 5:
    str_compare = "and is greater than 5"
elif last_dig == 0:
    str_compare = "and is 0"
else:
    str_compare = "and is less than 6 and not 0"
print(f"Last digit of {number} is {last_dig}, {str_compare}")
