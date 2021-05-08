x=list()
y=list()
n=int(input())
for i in range(n):
  x=list(map(int,input().split()))
  y=list(map(int,input().split()))
  y[x[1]-1],y[-x[1]]=y[-x[1]],y[x[1]-1]
  for j in y:
    print(j,end=" ")
  y=[]
  x=[]