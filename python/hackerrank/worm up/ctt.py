a=list(map(int,input().split()))
b=list(map(int,input().split()))
y=z=0
for i in range(3):
  if a[i]>b[i]:
    y+=1
  elif a[i]<b[i]:
    z+=1
print(y,z)