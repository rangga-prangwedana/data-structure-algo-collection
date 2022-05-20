T = int(input())

while T:
    n, s = map(int, input().split())
    if s <= n: print(s)
    else: print(2 * n - s)
    T -= 1

