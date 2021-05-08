p=input()
n=len(p)
k=int(input())
s=z=list()
y=set() 
for i in range(n//k):
  s.append(p[(i*n//k):(i+1)*n//k])
for i in range(len(s)):
  print(list(set(s[i])))
