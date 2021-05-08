for j in range(int(input())):
    a=int(input())
    b=0
    c=list(map(str,input().split()))
    for i in range(0,2*a,2):
      b+=12*c[i]+c[i+1]
    print(b)