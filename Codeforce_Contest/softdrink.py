n,k,l,c,d,p,nl,np = map(int,input().split())
gas = (k * l) / (n * l)
laim = (c * d) / n
sol = p /(p * n)
print(min(gas,laim,sol))