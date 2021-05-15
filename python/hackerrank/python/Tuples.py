n=int(input())
x=list(map(int,input().split()))
t=tuple(x)
print(hash(t))