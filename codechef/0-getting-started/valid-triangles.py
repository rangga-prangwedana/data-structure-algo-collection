# cook your dish here
T = int(input())

for i in range(T):
    a,b,c = map(int, input().split())
    sums = a + b + c
    if sums == 180: print("YES")
    else: print("NO")
