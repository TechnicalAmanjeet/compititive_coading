n=int(input())
for i in range(n):
  for j in range(n-i-1):
    print(' ',end="")
  for k in range(n-1-i,n):
    print('#',end="")
  print('\n')