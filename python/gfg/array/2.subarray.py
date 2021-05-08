
for i in range(int(input())):
  a,b=map(int,input().split())
  c=list(map(int,input().split()))
  print(a,b,c)
  j=0
  for k in range(1,a):
    if sum(c[:k])==b:
      print(j+1,k+1)
    elif sum(c[:k])>b:
      c.remove(c[j])
      c.insert(j,0)
      j+=1


