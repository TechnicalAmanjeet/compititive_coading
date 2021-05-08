n=int(input())
t=x=list()
for i in range(n):
  t=list(map(str,input().split()))
  if t[0]=='insert':
    x.insert(int(t[1]),int(t[2]))
  elif t[0]=='remove':
    x.remove(int(t[1]))
  elif t[0]=='append':
    x.append(int(t[1]))
  elif t[0]=='sort':
    x.sort()
  elif t[0]=='reverse':
    x.reverse()
  elif t[0]=='pop':
    x.pop()
  else:
    print(x)
  