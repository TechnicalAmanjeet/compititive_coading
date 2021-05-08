for i in range(int(input())):
  a=int(input())
  b=list(map(int,input().split()))
  z=0
  for j in range(a):
    if b[j]==j+1:
      print(j+1,end=" ")
      z+=1
  if z>0:
    print()
  else:
    print("Not Found")
