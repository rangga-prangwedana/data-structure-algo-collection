def solution(N):
    # write your code in Python 3.6
    # Code below is to convert int to binary strings
    ans = ""
    while N:
        if N & 1:
            ans = "1" + ans
        else:
            ans = "0" + ans
        N >>= 1
    
    return len(max(ans.strip("0").split("1")))
    
    # Strip is for removing "0" at the start and the end of binary strings
    # Split is splitting ans where "1" is, presumably the string will 
    # consist only of "0"
    # max returns the longest "0" string after splitting
    # len returns the int for max string size 
