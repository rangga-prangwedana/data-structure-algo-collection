T = int(input())

while T:
    d, l, r = map(int, input().split())
    if l <= d and d <= r: print("Take second dose now")
    elif d < l: print("Too Early")
    elif d > r: print("Too Late")
    T -= 1