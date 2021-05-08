for i in range(int(input())):
  n=int(input())
  x=list(map(int,input().split()))
  z=int(input())
  a=0
  for j in x:
    if j<=z:
      a+=1
  print(a)
