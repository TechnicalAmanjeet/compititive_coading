for i in range(int(input())):
  a,b=map(int,input().split())
  z=[0 for x in range(a)]
  c=list()
  for i in range(b):
    c.append(list(map(int,input().split())))
  print(a,b,c)
  
