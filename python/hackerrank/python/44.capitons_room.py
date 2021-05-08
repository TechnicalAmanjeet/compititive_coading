n=int(input())
a=list(map(int,input().split()))
b=list(set(a))

print(b)
for i in range((len(a)//n)+1):
  print(a.count(b[i]),b[i])
  if a.count(b[i])==1:
    print(b[i])
    break