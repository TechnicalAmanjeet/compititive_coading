a=list()
b=list()
c=list()
for i in range(int(input())):
  x=input()
  for j in x:
    if (ord(j) in range(ord('A'),ord('Z')+1)) or (ord(j) in range(ord('a'),ord('z')+1)):
      a.append(j)
    elif (ord(j) in range(ord('0'),ord('9')+1)):
      b.append(j)
    else:
      c.append(j)
  print("".join(a))
  print("".join(b))
  print("".join(c))
  a=[]
  b=[]
  c=[]