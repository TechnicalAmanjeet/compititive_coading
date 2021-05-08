n=int(input())
z=list()
for i in range(n):
  for j in range(2):
    z[i][j]=input()
print(z)

#churya gya code
a = [[input(), float(input())] for i in range(int(input()))]
s = sorted(set([x[1] for x in a]))
for name in sorted(x[0] for x in a if x[1] == s[1]):
    print(name)