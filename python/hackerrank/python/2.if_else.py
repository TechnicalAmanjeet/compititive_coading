n=int(input())
if n%2!=0:
  print('Weird')
else:
  if (n>=2 and n<5) or n>20:
    print('Not Weird')
  elif n<=20:
    print('Weird')