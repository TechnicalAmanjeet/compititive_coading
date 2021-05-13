z=x=list()
p=int(input())
for i in range(p):
  z=list(map(str,input().split()))
  x.append(z)
n=input()
for i in range(len(x)):
  if x[i][0]==n:
    avg=(float(x[i][1])+float(x[i][2])+float(x[i][3]))/3
    
    print("{:.2f}".format(avg))
