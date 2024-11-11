n = input()
a = n.split(" ")
s = ""
for i in range(len(a)):
    if i % 3 == 1:
        s += a[i][::-1]
    else:
        s += a[i]
    s+= " "
print(s)