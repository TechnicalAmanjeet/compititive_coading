from itertools import combinations

s,k=map(str,input().split())
t=x=list()
a=b=str()
for i in s:
  x.append(i)
x.sort()
b="".join(x)

for i in range(int(k)):
  t=list(combinations(b,int(i)+1))
  t.sort()
  for j in t:
    a="".join(j)
    print(a)

