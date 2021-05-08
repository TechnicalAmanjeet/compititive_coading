for i in range(int(input())):
  x=int(input())
  y=list(map(int,input().split()))
  y.sort()
  print(y[-2])