x=list()
for i in range(int(input())):
  y=int(input())
  x=list(map(int,input().split()))
  x.sort(reverse=True)
  for j in x:
    print(j,end=" ")
  x=[]

  #ryt

  def reverse(arr):
    for i in range(len(arr)):
        print(arr[-i-1],end=' ')

t = int(input())

for i in range(t):
    n = int(input())

    arr = list(map(int,input().split()))

    reverse(arr)
    print("" )