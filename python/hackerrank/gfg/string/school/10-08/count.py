a=b=c=d=0
for i in range(int(input())):
  for j in input():
    if ord(j) in range(ord('A'),ord("Z")):
      a+=1
    elif ord(j) in range(ord('a'),ord("b")):
      b+=1
    elif ord(j) in range(ord('0'),ord("9")):
      c+=1
    else:
      d+=1
  print(a)
  print(b)
  print(c)
  print(d)
  a=b=c=d=0
