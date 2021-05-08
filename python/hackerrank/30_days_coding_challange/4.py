# q. is not complited

for i in range(int(input())):
  a=int(input())
  if a<=0:
    print('Age is not valid, setting age to 0.')
    print('You are young.')
    print('You are young.')
    continue
  elif a<13:
    print('You are young.')
  elif a>=13 and a<18:
    print('You are a teenager.')
  else:
    print('You are old.')
  b=a+3
  if b<13:
    print('You are young.')
  elif b>=13 and a<18:
    print('You are a teenager.')
  else:
    print('You are old.')