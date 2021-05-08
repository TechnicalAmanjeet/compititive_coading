def counthv(x):
  h=0
  v=0
  x.append(x[0])
  x.insert(0,x[-1])
  print(x)
  for i in range(1,len(x)-1):
    if x[i]>x[i-1] and x[i+1]>x[i]:
      h=x[i]
    elif x[i]<x[i-1] and x[i+1]<x[i]:
      v=x[i]
  return [h,v]
print(counthv([1,2,1,2,3,2,1]))