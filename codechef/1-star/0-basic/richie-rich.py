T = int(input())

while T:
    a, b, x = map(int, input().split())
    print(int((b - a)/x))
    T -= 1