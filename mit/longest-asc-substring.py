# Assume s is a string, ex: 'azcbobobegghakl' 

# Uncomment for receiving input
# s = input()

current = s[0]
longest = s[0]

for i in range(0, len(s)-1):
    if s[i+1] >= s[i]: 
        current += s[i+1]
        if len(current) > len(longest):
            longest = current
    else:
        current = s[i+1]
print("Longest substring in alphabetical order is: ", longest)        
