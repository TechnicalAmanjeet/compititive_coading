
for i in range(int(input())):
  x=int(input())
  y=list(map(int,input().split()))
  y.sort()
  for j in range(x-2):
    print(y[j],end=" ")
  print()
