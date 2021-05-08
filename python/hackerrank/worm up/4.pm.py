import decimal

n=int(input())
t=list(map(int,input().split()))
a=b=c=0
for i in range(n):
  if t[i]>0:
    a+=1
  elif t[i]==0:
    c+=1
  else:
    b+=1

decimal.getcontext().prec = 6
a = decimal.Decimal(a)
b = decimal.Decimal(b)
c = decimal.Decimal(c)
n = decimal.Decimal(n)
print(a/n)
print(b/n)
print(c/n)