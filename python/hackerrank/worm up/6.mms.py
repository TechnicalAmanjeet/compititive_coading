a=list(map(int,input().split()))
a.sort()
print(sum(a[:-1]),end=" ")
print(sum(a[1:]),end=" ")