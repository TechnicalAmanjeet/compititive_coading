n=""
for i in range(int(input())):
  for j in range(int(input())):
    x=input()
    if len(n)<len(x):
      n=x
  print(n)
  n=""