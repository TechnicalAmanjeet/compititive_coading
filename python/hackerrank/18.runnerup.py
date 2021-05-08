n=int(input())
a=list(map(int,input().split()))
a.sort(reverse=True)
for i in range(1,len(a)):
  if a[i-1]!=a[i]:
    print(a[i])
    break
