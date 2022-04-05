# Binary search
# Only for sorted array

arr = [1, 2, 2, 3, 5, 6, 8, 9]

# Binary search example
target = 6
# Initial index, can use for while loop
a = 0
b = len(arr) - 1

# while method
while a <= b:
    k = int((a + b)/2)
    if arr[k] == target:
        print(k)
    if arr[k] > target:
        b = k - 1
    else:
        a = k + 1
