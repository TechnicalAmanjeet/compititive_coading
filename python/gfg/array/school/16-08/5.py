for i in range(int(input())):
    a,b=map(int,input().split())
    c=list(map(str,input().split()))
    d=set(c)
    for j in d:
      if c.count(j)==1:
        print(j)
        break