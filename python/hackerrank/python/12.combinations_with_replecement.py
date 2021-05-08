from itertools import combinations_with_replacement

s,k=map(str,input().split())
b=a=str()
t=x=list()

for i in range(len(s)):
  x.append(s[i])
x.sort()
b="".join(x)

t=list(combinations_with_replacement(b,int(k)))
t.sort()
for i in t:
  a="".join(i)
  print(a)
  