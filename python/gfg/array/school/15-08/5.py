for i in range(int(input())):
  a=int(input())
  b=list(map(int,input().split()))
  c=int(input())
  d=b.index(c)
  e=b[d+1:]
  print(d,end=" ")
  if c in e:
    print(e.index(c,d)+d+1)
  else:
    print(d) 

