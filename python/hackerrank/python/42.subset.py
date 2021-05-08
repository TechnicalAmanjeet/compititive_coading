for i in range(int(input())):
  a=int(input())
  b=set(map(int,input().split()))
  c=int(input())
  d=set(map(int,input().split()))
  if b==b.intersection(d):
    print('True')
  else:
    print('False')
  b=d={}