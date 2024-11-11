n = int(input())
s = "aeiou"
for _ in range(n):
    t = int(input());
    a = ""
    for i in range(t):
        a += s[i%5]
    a = sorted(a)
    st = ""
    for i in a:
        st += i
    print(st)
    