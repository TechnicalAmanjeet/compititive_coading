for i in range(int(input())):
  x=input()
  if all([y==x[0] for y in x]):
    print('YES')
  else:
    print('NO')