n,m=map(int,input().split())
z=list(map(int,input().split()))
a=set(list(map(int,input().split())))
b=set(list(map(int,input().split())))
n=a.intersection(z)
m=b.intersection(z)
print(len(n),len(m))
print(len(n)-len(m))


