n=int(input())
a=set(list(map(int,input().split())))
m=int(input())
z=list()
y=set()
for i in range(m):
  z=input().split()
  y=set(list(map(int,input().split())))
  if z[0]=='intersection_update':
    a.intersection_update(y)
  elif z[0]=='update':
    a.update(y)
  elif z[0]=='symmetric_difference_update':
    a.symmetric_difference_update(y)
  elif z[0]=='difference_update':
    a.difference_update(y)
  z=[]
  y={}
print(a)