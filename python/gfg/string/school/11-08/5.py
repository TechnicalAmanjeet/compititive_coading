for i in range(int(input())):
  n=int(input())
  y=list(map(int,input().split()))
  z=sorted(y)
  if y==z:
    print('1')
  else:
    print('0')