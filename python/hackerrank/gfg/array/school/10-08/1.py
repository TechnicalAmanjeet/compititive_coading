for i in range(int(input())):
  x=int(input())
  y=list(map(int,input().split()))
  t=1
  for j in range(x):
    t=t*y[j]
  print(t)
  t=1