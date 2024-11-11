a,b = map(int,input().split())
print((lambda:abs(a-b), lambda: 3)[a != 3 and b != 3]())

   