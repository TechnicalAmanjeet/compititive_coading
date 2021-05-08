n=int(input())
a=set(list(map(int,input().split())))
m=int(input())
b=set(list(map(int,input().split())))
c=list(set(a.symmetric_difference(b)))
d=sorted(c)
for i in d:
  print(i)