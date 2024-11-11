t = int(input())
for i in range(t):
    n = int(input())
    x = list(map(int, input().split()))
    if n > 2 or x[0] + 1 == x[-1]:
        print('NO')
    else:
        print('YES')