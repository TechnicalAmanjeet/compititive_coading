for i in range(int(input())):
  x=0
  for j in input():
    if ord(j)>=65 and ord(j)<=90:
      x+=1
  print(x)
