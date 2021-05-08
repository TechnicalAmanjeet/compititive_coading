n,z=int(input()),list(map(int,input().split()))
a=b=0
t=str()   
for i in range(len(z)):
  if z[i]>=0:
    a+=1
  t=str(z[i])
  if t==t[::-1]:
    b+=1
if a==len(z) and b>1:
  print('True',b)
else:
  print('False')
  
