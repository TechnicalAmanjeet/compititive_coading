for i in range(int(input())):
  x=int(input())
  y=list(map(int,input().split()))
  y.sort()
  print("Maximum element is: "+str(y[-1]))
  print("Minimum element is: "+str(y[0]))