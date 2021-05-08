for j in range(int(input())):
  n=int(input())
  a=input()
  t=0
  for i in range(n//2):
    if a[i]==a[len(a)-1-i]:
      t+=1
    else:
      print('0')
      break
  if t==n//2:
    print('1')