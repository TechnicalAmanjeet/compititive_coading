for i in range(int(input())):
  a=int(input())
  b=list(map(int,input().split()))
  n=0
  for j in range(a//2):
    if b[j]==b[-j-1]:
      n+=1
    else:
      print('NOT PERFECT')
      break
  if n==(a//2):
    print('PERFECT')