T = int(input())

while T:
    n, x = map(int, input().split())
    maks = 0
    while n:
        s, r = map(int, input().split())
        if s <= x: maks = max(maks, r)
        n -= 1
    print(maks)    
    T -= 1