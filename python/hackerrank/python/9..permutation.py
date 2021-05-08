from itertools import permutations

s,k=map(str,input().split())
t=list()
x=str()
t=list(permutations(s,int(k)))
t.sort()
for i in t:
  x="".join(i)
  print(x)
  