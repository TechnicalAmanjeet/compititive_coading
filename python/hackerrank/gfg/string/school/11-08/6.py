for i in range(int(input())):
  a=list(map(int,input().split()))
  b=list(map(int,input().split()))
  n=m=0
  for j in range(len(a)):
    if a[j]>b[j]:
      n+=1
    else:
      m+=1
  print(n,m)
  