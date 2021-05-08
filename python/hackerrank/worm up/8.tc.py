a=input()
b=a.split(':')
t=b[2][-2:]
b[2]=b[2][:2]
if t=='PM':
  if int(b[0])==12:
    print(":".join(b))
  else:
    b[0]=str(int(b[0])+12)
    print(":".join(b))
else:
  if int(b[0])==12:
    b[0]=str('00')
  print(":".join(b))
