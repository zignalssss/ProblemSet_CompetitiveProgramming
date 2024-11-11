def cyclic_shifts(s):
    n = len(s)
    cyclic_shifts = set()
    for i in range(n):
        cyclic_shifts.add(s[i:] + s[:i])
    return len(cyclic_shifts)

s = input()
print(cyclic_shifts(s))  
