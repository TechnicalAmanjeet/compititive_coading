for i in range(int(input())):
  n=int(input())
  x=list(map(int,input().split()))
  x.sort()
  for j in range(1,n):
    if j%2!=0:
      x.pop()
    else:
      x.pop(0)
  print(x)

#2nd mathod
for i in range(int(input())):
  n=int(input())
  x=list(map(int,input().split()))
  x.sort()
  if n%2==0:
    print(x[int(n//2)])
  else:
    print(x[int((n//2)+1)])