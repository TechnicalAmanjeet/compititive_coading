s=input()
t=list()
a=tuple()
n=1
for i in range(1,len(s)):
  if s[i-1]!=s[i]:
    a=(n,int(s[i-1]))
    print(a,end=" ")
    n=1
  else:
    n+=1
a=(n,int(s[-1]))
print(a)
