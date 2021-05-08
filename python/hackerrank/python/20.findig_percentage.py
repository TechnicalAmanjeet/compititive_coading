n=int(input())
z=dict()
for i in range(n):
  a,b,c,d=map(str,input().split())
  z[a]=[float(b),float(c),float(d)]
k=input()
avg=sum(z[k])/n
print(round(avg,2))
