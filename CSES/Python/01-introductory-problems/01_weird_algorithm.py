n = int(input())

while n > 0:
    print(int(n), end=" ") 
    if n == 1:
        break
    elif n % 2 == 0:
        n /= 2
    else:
        n = n * 3 + 1
