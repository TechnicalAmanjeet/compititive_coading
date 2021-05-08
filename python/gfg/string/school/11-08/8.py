for i in range(int(input())):
  n=int(input())
  x=list(map(int,input().split()))
  for j in range(len(x)):
    print(int(sum(x[:(j+1)])/(j+1)),end=" ")
  print()