s=input()
a=list()
for i in s:
  if ord(i) in range(65,91):
    a.append(chr(ord(i)+32))
  elif ord(i) in range(97,123):
    a.append(chr(ord(i)-32))
  else:
    a.append(i)
print("".join(a))

