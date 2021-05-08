for i in range(int(input())):
    a,b=map(int,input().split())
    c=list(map(str,input().split()))
    print(" ".join(c[(b):]+c[:(b)]d))

for i in range(int(input())):
    a,b=map(int,input().split())
    c=list(map(int,input().split()))
    d=c[(b):]+c[:(b)]
    for i in d:
      print(i,end=" ")
    print()