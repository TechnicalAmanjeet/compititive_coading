for j in range(int(input())):
    a=int(input())
    c=list(map(int,input().split()))
    d=list()
    for i in range(a+1):
      if (i not in c) and (i not in d):
        d.append(i)
        print(i,end=" ")
    print()

